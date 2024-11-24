#ifndef HOSTDIALOG_H
#define HOSTDIALOG_H

#include <QDialog>

namespace Ui {
class HostDialog;
}

class HostDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HostDialog(QWidget *parent = nullptr);
    ~HostDialog();

    QString getLobbyName() const;
    int getPlayerCount() const;

private slots:
    void on_backButton_clicked();

    void on_refreshButton_2_clicked();


private:
    Ui::HostDialog *ui;

signals:
    void createLobby(const QString &lobbyName, int playerCount);

};

#endif // HOSTDIALOG_H
