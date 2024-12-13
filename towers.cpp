#include "towers.h"
#include "ui_towers.h"

Towers::Towers(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Towers)
{
    ui->setupUi(this);

    this->setFixedSize(906,594);

    stacks.push_back(A);
    stacks.push_back(B);
    stacks.push_back(C);

    UIstacks.push_back(TowerA);
    UIstacks.push_back(TowerB);
    UIstacks.push_back(TowerC);

    discs[0] = ui->label_1;
    discs[1] = ui->label_2;
    discs[2] = ui->label_3;
    discs[3] = ui->label_4;
    discs[4] = ui->label_5;
    discs[5] = ui->label_6;
    discs[6] = ui->label_7;
    discs[7] = ui->label_8;
    discs[8] = ui->label_9;

    ui->A->setVisible(false);
    ui->B->setVisible(false);
    ui->C->setVisible(false);
    ui->NextButton->setVisible(false);
    ui->PreviousButton->setVisible(false);
    ui->BaseA->setVisible(false);
    ui->BaseB->setVisible(false);
    ui->BaseC->setVisible(false);

    for (int i=0; i < 9; i++){
        discs[i]->setVisible(false);
        discs[i]->setStyleSheet("QLabel { background-color : red; color : blue; }");
    }
}

Towers::~Towers()
{
    delete ui;
}

void Towers::on_pushButton_clicked()
{
    QString discs = ui->TowersEdit->text();
    if (discs.length() > 1 || discs.length() == 0){ return; }

    string s = discs.toStdString();
    if (!isdigit(s[0])){ return; }

    NumberOfDiscs = discs.toInt();
    if (NumberOfDiscs > 8 || NumberOfDiscs < 1) { return; }

    ui->TowersEdit->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->A->setVisible(true);
    ui->B->setVisible(true);
    ui->C->setVisible(true);
    ui->NextButton->setVisible(true);
    ui->PreviousButton->setVisible(true);
    ui->BaseA->setVisible(true);
    ui->BaseB->setVisible(true);
    ui->BaseC->setVisible(true);

    towerOfHanoi(NumberOfDiscs);
}

void Towers::moveAnimation(QLabel* disc, QLabel* destination_pillar, stack<QLabel*> destination_stack){
    int x, y;
    moveAnim = new QPropertyAnimation(disc, "geometry");
    moveAnim->setDuration(125);
    moveAnim->setStartValue(disc->geometry());

    if (!destination_stack.empty()){
        y = destination_stack.top()->y() - 25;
        x = destination_stack.top()->x() + 5;
    }
    else{
        y = destination_pillar->y() + 240;
        x = destination_pillar->x() - 56;
    }

    moveAnim->setEndValue(QRect(x, y, disc->geometry().width(), disc->geometry().height()));
    moveAnim->start();
}

void Towers::moveVisualDisks(const Move& m){
    switch (m.destination){
        case 0:
            moveAnimation(UIstacks[m.source].top(), ui->A, UIstacks[0]);
            break;
        case 1:
            moveAnimation(UIstacks[m.source].top(), ui->B, UIstacks[1]);
            break;
        case 2:
            moveAnimation(UIstacks[m.source].top(), ui->C, UIstacks[2]);
            break;
    }
    UIstacks[m.destination].push(UIstacks[m.source].top());
    UIstacks[m.source].pop();
}

void Towers::moveDisks(int a, int b)
{
    if (stacks[b].empty() || (!stacks[a].empty() && stacks[a].top() < stacks[b].top()))
    {
        stacks[b].push(stacks[a].top());
        stacks[a].pop();
        Move m(a, b);
        moveHistory.push_back(m);
    }
    else{
        moveDisks(b, a);
    }
}

void Towers::towerOfHanoi(int n)
{
    int src = 0, aux = 1, dest = 2;
    for (int i = n; i > 0; i--){
        stacks[src].push(i);
    }
    for (int i = 0; i < n; i++){
        discs[i]->setVisible(true);
        UIstacks[0].push(discs[i]);
    }

    int totalMoves = (1 << n) - 1;
    if (n % 2 == 0)
        swap(aux, dest);

    for (int i = 1; i <= totalMoves; i++)
    {
        if (i % 3 == 0){
            moveDisks(aux, dest);
        }
        else if (i % 3 == 1){
            moveDisks(src, dest);
        }
        else{
            moveDisks(src, aux);
        }
    }
}

void Towers::nextMove() {
    if (pos < moveHistory.size()){
        moveVisualDisks(moveHistory[pos]);
        pos++;
    }
}

void Towers::prevMove() {
    if (pos > 0){
        pos--;
        Move r(moveHistory[pos].destination, moveHistory[pos].source);
        moveVisualDisks(r);
    }
}

void Towers::on_NextButton_clicked()
{
    nextMove();
}

void Towers::on_PreviousButton_clicked()
{
    prevMove();
}

void Towers::on_Debug_clicked()
{

}
