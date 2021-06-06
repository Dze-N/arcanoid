/********************************************************************************
** Form generated from reading UI file 'levelchoice.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVELCHOICE_H
#define UI_LEVELCHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LevelChoice
{
public:
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QFrame *frameLevelOne;
    QPushButton *buttonLevelOne;
    QFrame *frameLevelTwo;
    QPushButton *buttonLevelTwo;
    QFrame *frameLevelThree;
    QPushButton *buttonLevelThree;
    QFrame *frameLevelFour;
    QPushButton *buttonLevelFour;
    QFrame *frameLevelFive;
    QPushButton *buttonLevelFive;
    QFrame *frameFinalLevel;
    QPushButton *buttonFinalLevel;

    void setupUi(QWidget *LevelChoice)
    {
        if (LevelChoice->objectName().isEmpty())
            LevelChoice->setObjectName(QString::fromUtf8("LevelChoice"));
        LevelChoice->resize(332, 482);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LevelChoice->sizePolicy().hasHeightForWidth());
        LevelChoice->setSizePolicy(sizePolicy);
        LevelChoice->setAutoFillBackground(true);
        horizontalLayout = new QHBoxLayout(LevelChoice);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 0, -1);
        verticalFrame = new QFrame(LevelChoice);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameLevelOne = new QFrame(verticalFrame);
        frameLevelOne->setObjectName(QString::fromUtf8("frameLevelOne"));
        frameLevelOne->setStyleSheet(QString::fromUtf8("background-color:rgb(160, 225, 255);\n"
"color: rgb(72, 48, 255);"));
        frameLevelOne->setFrameShape(QFrame::NoFrame);
        frameLevelOne->setFrameShadow(QFrame::Raised);
        buttonLevelOne = new QPushButton(frameLevelOne);
        buttonLevelOne->setObjectName(QString::fromUtf8("buttonLevelOne"));
        buttonLevelOne->setGeometry(QRect(10, 11, 311, 61));
        buttonLevelOne->setStyleSheet(QString::fromUtf8(""));
        buttonLevelOne->setAutoDefault(false);

        verticalLayout->addWidget(frameLevelOne);

        frameLevelTwo = new QFrame(verticalFrame);
        frameLevelTwo->setObjectName(QString::fromUtf8("frameLevelTwo"));
        frameLevelTwo->setStyleSheet(QString::fromUtf8("background-color:rgb(171, 255, 209);\n"
"color: rgb(7, 77, 13);"));
        frameLevelTwo->setFrameShape(QFrame::NoFrame);
        frameLevelTwo->setFrameShadow(QFrame::Raised);
        buttonLevelTwo = new QPushButton(frameLevelTwo);
        buttonLevelTwo->setObjectName(QString::fromUtf8("buttonLevelTwo"));
        buttonLevelTwo->setGeometry(QRect(10, 10, 311, 61));

        verticalLayout->addWidget(frameLevelTwo);

        frameLevelThree = new QFrame(verticalFrame);
        frameLevelThree->setObjectName(QString::fromUtf8("frameLevelThree"));
        frameLevelThree->setStyleSheet(QString::fromUtf8("background-color:rgb(252, 255, 190);\n"
"color: rgb(188, 188, 46);"));
        frameLevelThree->setFrameShape(QFrame::NoFrame);
        frameLevelThree->setFrameShadow(QFrame::Raised);
        buttonLevelThree = new QPushButton(frameLevelThree);
        buttonLevelThree->setObjectName(QString::fromUtf8("buttonLevelThree"));
        buttonLevelThree->setGeometry(QRect(10, 10, 311, 61));

        verticalLayout->addWidget(frameLevelThree);

        frameLevelFour = new QFrame(verticalFrame);
        frameLevelFour->setObjectName(QString::fromUtf8("frameLevelFour"));
        frameLevelFour->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 182, 12);\n"
"color: rgb(255, 142, 29);"));
        frameLevelFour->setFrameShape(QFrame::NoFrame);
        frameLevelFour->setFrameShadow(QFrame::Raised);
        buttonLevelFour = new QPushButton(frameLevelFour);
        buttonLevelFour->setObjectName(QString::fromUtf8("buttonLevelFour"));
        buttonLevelFour->setGeometry(QRect(10, 10, 311, 61));

        verticalLayout->addWidget(frameLevelFour);

        frameLevelFive = new QFrame(verticalFrame);
        frameLevelFive->setObjectName(QString::fromUtf8("frameLevelFive"));
        frameLevelFive->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 0, 0);\n"
"color: rgb(138, 0, 2);"));
        frameLevelFive->setFrameShape(QFrame::NoFrame);
        frameLevelFive->setFrameShadow(QFrame::Raised);
        buttonLevelFive = new QPushButton(frameLevelFive);
        buttonLevelFive->setObjectName(QString::fromUtf8("buttonLevelFive"));
        buttonLevelFive->setGeometry(QRect(10, 10, 311, 61));

        verticalLayout->addWidget(frameLevelFive);

        frameFinalLevel = new QFrame(verticalFrame);
        frameFinalLevel->setObjectName(QString::fromUtf8("frameFinalLevel"));
        frameFinalLevel->setEnabled(true);
        frameFinalLevel->setStyleSheet(QString::fromUtf8("background-color:rgb(228, 161, 255);\n"
"color: rgb(113, 3, 117);"));
        frameFinalLevel->setFrameShape(QFrame::NoFrame);
        frameFinalLevel->setFrameShadow(QFrame::Raised);
        buttonFinalLevel = new QPushButton(frameFinalLevel);
        buttonFinalLevel->setObjectName(QString::fromUtf8("buttonFinalLevel"));
        buttonFinalLevel->setGeometry(QRect(10, 10, 311, 61));

        verticalLayout->addWidget(frameFinalLevel);


        horizontalLayout_2->addWidget(verticalFrame);


        horizontalLayout->addLayout(horizontalLayout_2);


        retranslateUi(LevelChoice);

        buttonLevelTwo->setDefault(false);


        QMetaObject::connectSlotsByName(LevelChoice);
    } // setupUi

    void retranslateUi(QWidget *LevelChoice)
    {
        LevelChoice->setWindowTitle(QCoreApplication::translate("LevelChoice", "Form", nullptr));
        buttonLevelOne->setText(QCoreApplication::translate("LevelChoice", "LEVEL 1", nullptr));
        buttonLevelTwo->setText(QCoreApplication::translate("LevelChoice", "LEVEL 2", nullptr));
        buttonLevelThree->setText(QCoreApplication::translate("LevelChoice", "LEVEL 3", nullptr));
        buttonLevelFour->setText(QCoreApplication::translate("LevelChoice", "LEVEL 4", nullptr));
        buttonLevelFive->setText(QCoreApplication::translate("LevelChoice", "LEVEL 5", nullptr));
        buttonFinalLevel->setText(QCoreApplication::translate("LevelChoice", "FINAL LEVEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LevelChoice: public Ui_LevelChoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVELCHOICE_H
