#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "multiplayer.h"
#include <iostream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/mrluk/Documents/Brick_Game/BrickGame_logo.png");
    ui->label->setPixmap(pix);
    this->setWindowFlags(this->windowFlags() | Qt::WindowStaysOnTopHint);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_clicked()
{
    multi = new Multiplayer(this); // Tworzymy okno jako dziecko
    this->hide();                  // Ukrywamy główne okno
    multi->show(); // Wyświetlamy drugie okno

    // Po zamknięciu Multiplayer wracamy do MainWindow
    connect(multi, &QDialog::finished, this, [this](int result) {
        this->show();              // Pokazujemy główne okno

    });


}
