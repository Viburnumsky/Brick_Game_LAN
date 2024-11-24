#include "multiplayer.h"
#include "ui_multiplayer.h"
#include <iostream>
Multiplayer::Multiplayer(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Multiplayer)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() | Qt::WindowStaysOnTopHint);
}

QStringList Multiplayer::lobbies={"Game #1 1/4", "Game #2 2/4", "Game #3 3/4"};

Multiplayer::~Multiplayer()
{
    delete ui;
}

void Multiplayer::addLobbyToList(const QString &lobbyName, int playerCount) {
    // Dodaj nowe lobby w formacie "Game #X Y/4"
    QString newLobby = QString("%1 0/%2").arg(lobbyName).arg(playerCount);
    lobbies.append(newLobby); // Dodaj do QStringList

    // Wyświetl w widżecie listy
    ui->listWidget->addItem(newLobby);
}

void Multiplayer::on_pushButton_4_clicked()
{
    this->accept(); // Zakończenie dialogu sygnalizowane sygnałem `finished`
}

void Multiplayer::refreshLobbyList() {
    // Przykładowe odświeżanie danych listy lobby

    // Wyczyść aktualną listę
    ui->listWidget->clear();

    // Dodaj nowe dane do listy
    for (const QString &lobby : lobbies) {
        ui->listWidget->addItem(lobby);
    }
}


void Multiplayer::on_refreshButton_clicked()
{
    refreshLobbyList();
}


void Multiplayer::on_hostButton_clicked()
{
    // Tworzenie nowego okna dialogowego HostDialog
    dialog = new HostDialog(this);
    dialog->show();
    connect(dialog, &HostDialog::createLobby, this, &Multiplayer::addLobbyToList);

}

