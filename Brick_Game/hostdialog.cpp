#include "hostdialog.h"
#include "ui_hostdialog.h"

HostDialog::HostDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HostDialog)
{
    ui->setupUi(this);

    ui->spinBox->setMaximum(4);
}

HostDialog::~HostDialog()
{
    delete ui;
}

QString HostDialog::getLobbyName() const {
    return ui->lineEdit->text();
}
int HostDialog::getPlayerCount() const {
    return ui->spinBox->value();
}

void HostDialog::on_backButton_clicked()
{
    this->accept();
}


void HostDialog::on_refreshButton_2_clicked()
{
    QString lobbyName = ui->lineEdit->text();     // Pobierz nazwę lobby
    int playerCount = ui->spinBox->value();       // Pobierz liczbę graczy

    if (!lobbyName.isEmpty()) {
        emit createLobby(lobbyName, playerCount); // Wyemituj sygnał
        accept(); // Zamknij dialog
    }
}
