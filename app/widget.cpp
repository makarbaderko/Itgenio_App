#include "widget.h"
#include "ui_widget.h"
//a
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    art = 0.f;
    programming = 0.f;
    beginner = 0.f;

    sChoice = " ";

    isChecked = false;

    ui->setupUi(this);
    ui->tab_2->hide();
    ui->tab_3->hide();
    ui->tab_4->hide();
    ui->tab_5->hide();
    ui->tabWidget->setCurrentIndex(0);

    font = ui->label->font();
    //font.setPointSize(20);
    //ui->label->setFont(font);
    ui->label->setWordWrap(true);

    ui->label_2->setFont(font);
    ui->label_2->setWordWrap(true);

    ui->label_3->setFont(font);
    ui->label_3->setWordWrap(true);

    ui->label_4->setFont(font);
    ui->label_4->setWordWrap(true);

    ui->label_5->setFont(font);
    ui->label_5->setWordWrap(true);

    ui->label_6->hide();
    ui->label_6->setWordWrap(true);


    ui->tabWidget->setFixedSize(900, 640);
    ui->tabWidget->setStyleSheet("QTabWidget::pane { border: 0; }");

    QPixmap pix(":/itgenik.jpg");

    ui->label_7->setPixmap(pix.scaled(900, 400, Qt::KeepAspectRatio));


}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_pushButton_clicked()
{
    ui->tab->hide();
    ui->tab_2->show();
}



void Widget::on_radioButton_toggled(bool checked)
{
    if(checked)
    {
        art = 0.5f;
        programming = 0.0f;
    }
}

void Widget::on_radioButton_2_toggled(bool checked)
{
    if(checked)
    {
        programming = 0.5f;
        art = 0.0f;
    }
}

void Widget::on_radioButton_3_toggled(bool checked)
{
    if(checked)
    {
        art = 0.5f;
        programming = 0.5f;
    }
}

void Widget::on_pushButton_2_clicked()
{
    ui->tab_2->hide();

    if(art > programming)
    {
        ui->tab_3->show();
        ui->tabWidget->setCurrentIndex(2);
    }
    else if(programming > art)
    {
        ui->tab_4->show();
        ui->tabWidget->setCurrentIndex(3);
    }
    else if(programming == art)
    {
        ui->tab_5->show();
        ui->tabWidget->setCurrentIndex(4);

    }
}

void Widget::on_radioButton_4_toggled(bool checked)
{
    if(checked)
    {
        sChoice = "Art";
        isChecked = true;
    }
}

void Widget::on_radioButton_5_toggled(bool checked)
{
    if(checked)
    {
        sChoice = "3D modelling";
        isChecked = true;
    }
}

void Widget::on_radioButton_7_toggled(bool checked)
{
    if(checked)
    {
        sChoice = "Web Development";
        isChecked = true;
    }
}

void Widget::on_radioButton_8_toggled(bool checked)
{
    if(checked)
    {
        sChoice = "Desktop development";
        isChecked = true;
    }
}

void Widget::on_radioButton_9_toggled(bool checked)
{
    if(checked)
    {
        sChoice = "Mobile development";
        isChecked = true;
    }
}

void Widget::on_radioButton_10_toggled(bool checked)
{
    if(checked)
    {
        sChoice = "Basic";
        isChecked = true;
    }
}

void Widget::on_radioButton_11_toggled(bool checked)
{
    if(checked)
    {
        sChoice = "Game development";
        isChecked = true;
    }
}

void Widget::on_pushButton_4_clicked()
{
    QString prefix = "Программирование в ";

    if(sChoice == "3D modelling")
    {
        prefix = "Моделирование в ";
    }
    else if(sChoice == "Art")
    {
        prefix = "Творчество в ";
    }
    else if(sChoice == "Game development")
    {
        prefix = "Программирование игр в ";
    }

    if(isChecked)
    {

    QString sJson;
    QFile json_file("direction.json");

    if(!json_file.open(QIODevice::ReadOnly | QIODevice::Text))
        qDebug("Error opening json file");

    sJson = json_file.readAll();
    json_file.close();

    QJsonDocument doc = QJsonDocument::fromJson(sJson.toUtf8());
    QJsonObject set2 = doc.object();

    QJsonArray arr = doc[sChoice].toArray();

    int a = rand.bounded(0, arr.size());
    qDebug() << arr[a].toString();

    ui->label_6->setText(prefix + arr[a].toString());
    ui->tabWidget->setCurrentIndex(4);
    ui->label_6->show();
    }
    else
       QMessageBox::warning(this, "Warning", "Please select a choice!              ");
}

void Widget::on_pushButton_3_clicked()
{
    QString prefix = "Программирование в ";

    if(sChoice == "3D modelling")
    {
        prefix = "Моделирование в ";
    }
    else if(sChoice == "Art")
    {
        prefix = "Творчество в ";
    }
    else if(sChoice == "Game development")
    {
        prefix = "Программирование игр в ";
    }

    if(isChecked)
    {

    QString sJson;
    QFile json_file("direction.json");

    if(!json_file.open(QIODevice::ReadOnly | QIODevice::Text))
        qDebug("Error opening json file");

    sJson = json_file.readAll();
    json_file.close();

    QJsonDocument doc = QJsonDocument::fromJson(sJson.toUtf8());
    QJsonObject set2 = doc.object();

    QJsonArray arr = doc[sChoice].toArray(); //arr[i].toString()

    int a = rand.bounded(0, arr.size());
    qDebug() << arr[a].toString();

    ui->label_6->setText(prefix + arr[a].toString());
    ui->tabWidget->setCurrentIndex(4);
    ui->label_6->show();
    }
    else
        QMessageBox::warning(this, "Warning", "Please select a choice!              ");
}



