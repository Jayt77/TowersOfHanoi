#ifndef TOWERS_H
#define TOWERS_H

#include <QMainWindow>
#include <iostream>
#include <stack>
#include <vector>
#include <QLabel>
#include "Move.h"
#include <QRectF>
#include <QVBoxLayout>
#include <QPropertyAnimation>
#include <string>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Towers; }
QT_END_NAMESPACE

class Towers : public QMainWindow
{
    Q_OBJECT

public:
    Towers(QWidget *parent = nullptr);
    ~Towers();

    void towerOfHanoi(int n);
    void moveDisks(int a, int b);
    void moveVisualDisks(const Move& m);

    void prevMove();
    void nextMove();

    void moveAnimation(QLabel* disc, QLabel* destination_pillar, stack<QLabel*> destination_stack);

private slots:
    void on_pushButton_clicked();

    void on_NextButton_clicked();

    void on_PreviousButton_clicked();

    void on_Debug_clicked();

private:
    Ui::Towers *ui;

    int NumberOfDiscs;
    int pos = 0;
    int A_Top = 0, B_Top = 0, C_Top = 0;

    stack<int> A, B, C;
    stack<QLabel*> TowerA, TowerB, TowerC;

    char rod[3] = {'A', 'B', 'C'};
    QLabel* discs[9];

    vector<stack<QLabel*>> UIstacks;
    vector<stack<int>> stacks;
    vector<Move> moveHistory;


    QPropertyAnimation* moveAnim;
};
#endif // TOWERS_H
