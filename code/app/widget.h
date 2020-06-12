#ifndef WIDGET_H
#define WIDGET_H
#include "json.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    int rChoice;

private slots:
    void on_pushButton_clicked();

    void on_radioButton_toggled(bool checked);

    void on_radioButton_2_toggled(bool checked);

    void on_radioButton_3_toggled(bool checked);

    void on_pushButton_2_clicked();

    void on_radioButton_4_toggled(bool checked);

    void on_radioButton_5_toggled(bool checked);

    void on_radioButton_7_toggled(bool checked);

    void on_radioButton_8_toggled(bool checked);

    void on_radioButton_9_toggled(bool checked);

    void on_radioButton_10_toggled(bool checked);

    void on_radioButton_11_toggled(bool checked);

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Widget *ui;
    QFont font;

    float art;
    float programming;
    float beginner;

    QString sChoice;
    bool isChecked;
    QRandomGenerator rand;

};
#endif // WIDGET_H
