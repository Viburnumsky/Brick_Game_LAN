#ifndef MULTIPLAYER_H
#define MULTIPLAYER_H

#include <QDialog>
#include "hostdialog.h"
namespace Ui {
class Multiplayer;
}

class Multiplayer : public QDialog
{
    Q_OBJECT



public:
    explicit Multiplayer(QWidget *parent = nullptr);
    ~Multiplayer();
    static QStringList lobbies;

public slots:
    void refreshLobbyList(); // Funkcja odświeżania listy lobby



private slots:
    void on_pushButton_4_clicked();

    void on_refreshButton_clicked();

    void on_hostButton_clicked();
    void addLobbyToList(const QString &lobbyName, int playerCount);

private:
    Ui::Multiplayer *ui;
    HostDialog *dialog;


};


#endif // MULTIPLAYER_H
