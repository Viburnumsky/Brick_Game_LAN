#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "multiplayer.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QStringList lobbies;

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Multiplayer *multi;

};
#endif // MAINWINDOW_H
