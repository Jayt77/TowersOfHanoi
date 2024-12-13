/********************************************************************************
** Form generated from reading UI file 'towers.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOWERS_H
#define UI_TOWERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Towers
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *PreviousButton;
    QPushButton *NextButton;
    QLineEdit *TowersEdit;
    QLabel *B;
    QLabel *C;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *A;
    QLabel *BaseC;
    QLabel *BaseB;
    QLabel *BaseA;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Towers)
    {
        if (Towers->objectName().isEmpty())
            Towers->setObjectName("Towers");
        Towers->resize(906, 594);
        centralwidget = new QWidget(Towers);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(410, 270, 75, 23));
        PreviousButton = new QPushButton(centralwidget);
        PreviousButton->setObjectName("PreviousButton");
        PreviousButton->setGeometry(QRect(380, 490, 75, 23));
        NextButton = new QPushButton(centralwidget);
        NextButton->setObjectName("NextButton");
        NextButton->setGeometry(QRect(460, 490, 75, 23));
        TowersEdit = new QLineEdit(centralwidget);
        TowersEdit->setObjectName("TowersEdit");
        TowersEdit->setGeometry(QRect(340, 229, 211, 31));
        B = new QLabel(centralwidget);
        B->setObjectName("B");
        B->setGeometry(QRect(447, 157, 21, 261));
        B->setMaximumSize(QSize(21, 261));
        B->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Tower.png")));
        B->setScaledContents(true);
        C = new QLabel(centralwidget);
        C->setObjectName("C");
        C->setGeometry(QRect(690, 157, 21, 261));
        C->setMaximumSize(QSize(21, 261));
        C->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Tower.png")));
        C->setScaledContents(true);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(175, 157, 60, 21));
        label_9->setMaximumSize(QSize(60, 21));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Disc (9).png")));
        label_9->setScaledContents(true);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(170, 188, 70, 21));
        label_8->setMaximumSize(QSize(70, 21));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Disc (3).png")));
        label_8->setScaledContents(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(165, 219, 80, 21));
        label_7->setMaximumSize(QSize(80, 21));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Disc (8).png")));
        label_7->setScaledContents(true);
        label_7->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(148, 312, 115, 21));
        label_4->setMaximumSize(QSize(115, 21));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Disc (7).png")));
        label_4->setScaledContents(true);
        label_1 = new QLabel(centralwidget);
        label_1->setObjectName("label_1");
        label_1->setEnabled(true);
        label_1->setGeometry(QRect(120, 405, 170, 21));
        label_1->setMaximumSize(QSize(170, 21));
        label_1->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Disc (1).png")));
        label_1->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 374, 150, 21));
        label_2->setMaximumSize(QSize(150, 21));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Disc (2).png")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(160, 250, 90, 21));
        label_6->setMaximumSize(QSize(90, 21));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Disc (4).png")));
        label_6->setScaledContents(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(155, 281, 100, 21));
        label_5->setMaximumSize(QSize(100, 21));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Disc (6).png")));
        label_5->setScaledContents(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 343, 130, 21));
        label_3->setMaximumSize(QSize(130, 21));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Disc (5).png")));
        label_3->setScaledContents(true);
        A = new QLabel(centralwidget);
        A->setObjectName("A");
        A->setGeometry(QRect(194, 157, 21, 261));
        A->setMaximumSize(QSize(21, 261));
        A->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Tower.png")));
        A->setScaledContents(true);
        BaseC = new QLabel(centralwidget);
        BaseC->setObjectName("BaseC");
        BaseC->setGeometry(QRect(666, 416, 71, 21));
        BaseC->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Disc.png")));
        BaseC->setScaledContents(true);
        BaseB = new QLabel(centralwidget);
        BaseB->setObjectName("BaseB");
        BaseB->setGeometry(QRect(422, 416, 71, 21));
        BaseB->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Disc.png")));
        BaseB->setScaledContents(true);
        BaseA = new QLabel(centralwidget);
        BaseA->setObjectName("BaseA");
        BaseA->setGeometry(QRect(170, 416, 71, 21));
        BaseA->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Disc.png")));
        BaseA->setScaledContents(true);
        Towers->setCentralWidget(centralwidget);
        A->raise();
        C->raise();
        B->raise();
        BaseA->raise();
        BaseC->raise();
        BaseB->raise();
        PreviousButton->raise();
        NextButton->raise();
        label_5->raise();
        label_7->raise();
        label_2->raise();
        label_4->raise();
        label_8->raise();
        label_9->raise();
        label_6->raise();
        label_3->raise();
        pushButton->raise();
        TowersEdit->raise();
        label_1->raise();
        menubar = new QMenuBar(Towers);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 906, 22));
        Towers->setMenuBar(menubar);
        statusbar = new QStatusBar(Towers);
        statusbar->setObjectName("statusbar");
        Towers->setStatusBar(statusbar);

        retranslateUi(Towers);

        QMetaObject::connectSlotsByName(Towers);
    } // setupUi

    void retranslateUi(QMainWindow *Towers)
    {
        Towers->setWindowTitle(QCoreApplication::translate("Towers", "Towers", nullptr));
        pushButton->setText(QCoreApplication::translate("Towers", "Submit", nullptr));
        PreviousButton->setText(QCoreApplication::translate("Towers", "Previous", nullptr));
        NextButton->setText(QCoreApplication::translate("Towers", "Next", nullptr));
        B->setText(QString());
        C->setText(QString());
        label_9->setText(QString());
        label_8->setText(QString());
        label_7->setText(QString());
        label_4->setText(QString());
        label_1->setText(QString());
        label_2->setText(QString());
        label_6->setText(QString());
        label_5->setText(QString());
        label_3->setText(QString());
        A->setText(QString());
        BaseC->setText(QString());
        BaseB->setText(QString());
        BaseA->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Towers: public Ui_Towers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOWERS_H
