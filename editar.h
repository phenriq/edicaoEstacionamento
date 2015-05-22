#ifndef EDITAR_H
#define EDITAR_H

#include <QDialog>

namespace Ui {
class Editar;
}

class Editar : public QDialog
{
    Q_OBJECT

public:
    explicit Editar(QWidget *parent = 0);
    ~Editar();

    QStringList retornaValores();
//    QString

private slots:
    void on_salvar_clicked();

private:
    Ui::Editar *ui;
};

#endif // EDITAR_H
