/********************************************************************************
** Form generated from reading UI file 'hostdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOSTDIALOG_H
#define UI_HOSTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_HostDialog
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox;
    QPushButton *backButton;
    QPushButton *refreshButton_2;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *HostDialog)
    {
        if (HostDialog->objectName().isEmpty())
            HostDialog->setObjectName("HostDialog");
        HostDialog->resize(400, 300);
        HostDialog->setMinimumSize(QSize(400, 300));
        HostDialog->setMaximumSize(QSize(400, 300));
        lineEdit = new QLineEdit(HostDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(40, 70, 161, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("System")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 188, 15);\n"
"font: System;\n"
"border: rgb(155, 188, 15);"));
        label = new QLabel(HostDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 40, 161, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("System")});
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);
        label_2 = new QLabel(HostDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 110, 161, 31));
        label_2->setFont(font1);
        spinBox = new QSpinBox(HostDialog);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(40, 140, 41, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("System")});
        font2.setBold(true);
        spinBox->setFont(font2);
        spinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 188, 15);"));
        backButton = new QPushButton(HostDialog);
        backButton->setObjectName("backButton");
        backButton->setEnabled(true);
        backButton->setGeometry(QRect(60, 210, 101, 21));
        backButton->setMaximumSize(QSize(101, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font3.setPointSize(26);
        backButton->setFont(font3);
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        refreshButton_2 = new QPushButton(HostDialog);
        refreshButton_2->setObjectName("refreshButton_2");
        refreshButton_2->setEnabled(true);
        refreshButton_2->setGeometry(QRect(240, 210, 101, 21));
        refreshButton_2->setMaximumSize(QSize(101, 21));
        refreshButton_2->setFont(font3);
        refreshButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_4 = new QLabel(HostDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(240, 230, 101, 21));
        label_5 = new QLabel(HostDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 230, 101, 21));

        retranslateUi(HostDialog);

        QMetaObject::connectSlotsByName(HostDialog);
    } // setupUi

    void retranslateUi(QDialog *HostDialog)
    {
        HostDialog->setWindowTitle(QCoreApplication::translate("HostDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("HostDialog", "<html><head/><body><p><span style=\" color:#746d72;\">Lobby name</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("HostDialog", "<html><head/><body><p><span style=\" color:#746d72;\">Number of players</span></p></body></html>", nullptr));
        backButton->setText(QString());
        refreshButton_2->setText(QString());
        label_4->setText(QCoreApplication::translate("HostDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#746d72;\">Host</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("HostDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#746d72;\">Back</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HostDialog: public Ui_HostDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOSTDIALOG_H
