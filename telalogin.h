#ifndef TELALOGIN_H
#define TELALOGIN_H

#include <QDialog>

namespace Ui {
class TelaLogin;
}

class TelaLogin : public QDialog
{
    Q_OBJECT

public:

    explicit TelaLogin(QWidget *parent = 0);
    ~TelaLogin();

private slots:
    void on_btnLogin_clicked();

private:
    Ui::TelaLogin *ui;
};

#endif // TELALOGIN_H
