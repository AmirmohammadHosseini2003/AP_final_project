#include "dialog.h"
#include "ui_dialog.h"
#include <QString>

void player :: addfinance(int f)
{
    finance = finance + f ;
};

void player :: nextlocation(int n)
{
    location = location + n ;
    if (location > 39 )
    {
      addfinance(200);
      location = location -40;
    }
};

player::player(int c)
    : color(c), duble(0), finance(1500)
{};

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);


}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_pushButton_clicked()
{
    player *players[ui->comboBox->currentIndex()];
    for (int i=0;i<ui->comboBox->currentIndex();i++)
        players[i] = new player(i);

    ui->label->setText(ui->comboBox->currentText());
}
