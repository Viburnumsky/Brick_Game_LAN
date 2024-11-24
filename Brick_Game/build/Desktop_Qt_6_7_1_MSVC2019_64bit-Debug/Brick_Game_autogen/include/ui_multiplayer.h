/********************************************************************************
** Form generated from reading UI file 'multiplayer.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIPLAYER_H
#define UI_MULTIPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Multiplayer
{
public:
    QListWidget *listWidget;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *refreshButton;
    QPushButton *joinButton;
    QPushButton *hostButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Multiplayer)
    {
        if (Multiplayer->objectName().isEmpty())
            Multiplayer->setObjectName("Multiplayer");
        Multiplayer->resize(540, 505);
        Multiplayer->setMinimumSize(QSize(540, 505));
        Multiplayer->setMaximumSize(QSize(540, 505));
        listWidget = new QListWidget(Multiplayer);
        listWidget->setObjectName("listWidget");
        listWidget->setEnabled(true);
        listWidget->setGeometry(QRect(40, 60, 461, 351));
        QFont font;
        font.setFamilies({QString::fromUtf8("System")});
        font.setPointSize(12);
        font.setBold(true);
        listWidget->setFont(font);
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 188, 15);"));
        label = new QLabel(Multiplayer);
        label->setObjectName("label");
        label->setEnabled(true);
        label->setGeometry(QRect(40, 30, 161, 21));
        horizontalLayoutWidget = new QWidget(Multiplayer);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setEnabled(true);
        horizontalLayoutWidget->setGeometry(QRect(0, 419, 541, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        refreshButton = new QPushButton(horizontalLayoutWidget);
        refreshButton->setObjectName("refreshButton");
        refreshButton->setEnabled(true);
        refreshButton->setMaximumSize(QSize(101, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font1.setPointSize(26);
        refreshButton->setFont(font1);
        refreshButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #FF0000;\n"
"border-radius: 10px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #FF0000, stop: 1 #c40000\n"
");\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #c40000, stop: 1 #7a0101\n"
");\n"
"padding: 5px;\n"
"}\n"
""));

        horizontalLayout->addWidget(refreshButton);

        joinButton = new QPushButton(horizontalLayoutWidget);
        joinButton->setObjectName("joinButton");
        joinButton->setEnabled(true);
        joinButton->setMaximumSize(QSize(101, 21));
        joinButton->setBaseSize(QSize(9, 0));
        joinButton->setFont(font1);
        joinButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #FF0000;\n"
"border-radius: 10px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #FF0000, stop: 1 #c40000\n"
");\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #c40000, stop: 1 #7a0101\n"
");\n"
"padding: 5px;\n"
"}\n"
""));

        horizontalLayout->addWidget(joinButton);

        hostButton = new QPushButton(horizontalLayoutWidget);
        hostButton->setObjectName("hostButton");
        hostButton->setEnabled(true);
        hostButton->setMaximumSize(QSize(101, 21));
        hostButton->setBaseSize(QSize(9, 0));
        hostButton->setFont(font1);
        hostButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #FF0000;\n"
"border-radius: 10px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #FF0000, stop: 1 #c40000\n"
");\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #c40000, stop: 1 #7a0101\n"
");\n"
"padding: 5px;\n"
"}\n"
""));

        horizontalLayout->addWidget(hostButton);

        label_2 = new QLabel(Multiplayer);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 460, 91, 21));
        label_3 = new QLabel(Multiplayer);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(220, 460, 101, 21));
        label_4 = new QLabel(Multiplayer);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(390, 460, 91, 21));
        pushButton_4 = new QPushButton(Multiplayer);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setEnabled(true);
        pushButton_4->setGeometry(QRect(380, 20, 101, 31));
        pushButton_4->setMaximumSize(QSize(101, 40));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font2.setPointSize(16);
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #FF0000;\n"
"border-radius: 10px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #FF0000, stop: 1 #c40000\n"
");\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #c40000, stop: 1 #7a0101\n"
");\n"
"padding: 5px;\n"
"}\n"
""));

        retranslateUi(Multiplayer);

        QMetaObject::connectSlotsByName(Multiplayer);
    } // setupUi

    void retranslateUi(QDialog *Multiplayer)
    {
        Multiplayer->setWindowTitle(QCoreApplication::translate("Multiplayer", "Multiplayer", nullptr));
        label->setText(QCoreApplication::translate("Multiplayer", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; color:#746d72;\">List of lobbies:</span></p></body></html>", nullptr));
        refreshButton->setText(QString());
        joinButton->setText(QString());
        hostButton->setText(QString());
        label_2->setText(QCoreApplication::translate("Multiplayer", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#746d72;\">Refresh</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Multiplayer", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#746d72;\">Join</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Multiplayer", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#746d72;\">Host</span></p></body></html>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Multiplayer", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Multiplayer: public Ui_Multiplayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPLAYER_H
