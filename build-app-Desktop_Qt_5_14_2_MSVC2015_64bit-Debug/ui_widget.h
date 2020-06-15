/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_7;
    QPushButton *pushButton_5;
    QWidget *tab_2;
    QRadioButton *radioButton;
    QLabel *label_2;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton_2;
    QWidget *tab_3;
    QLabel *label_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QPushButton *pushButton_3;
    QWidget *tab_4;
    QLabel *label_4;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QPushButton *pushButton_4;
    QWidget *tab_5;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(350, 500);
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, -30, 350, 551));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0.267, stop:0 rgba(140, 255, 0, 138), stop:1 rgba(255, 255, 255, 255));"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(25, 30, 301, 121));
        QFont font;
        font.setFamily(QString::fromUtf8("Lucida Console"));
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 11pt \"Lucida Console\";"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(75, 360, 200, 70));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(11);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #36ff00;\n"
"border-radius: 15px\n"
"\n"
""));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 180, 341, 171));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/itgenik.jpg")));
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 460, 80, 21));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        radioButton = new QRadioButton(tab_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 140, 289, 32));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Lucida Console"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        radioButton->setFont(font2);
        radioButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 10pt \"Lucida Console\";"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 30, 271, 91));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 11pt \"Lucida Console\";"));
        radioButton_2 = new QRadioButton(tab_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 200, 321, 45));
        radioButton_2->setFont(font2);
        radioButton_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 10pt \"Lucida Console\";"));
        radioButton_3 = new QRadioButton(tab_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 270, 321, 19));
        radioButton_3->setFont(font2);
        radioButton_3->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 10pt \"Lucida Console\";"));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(75, 360, 200, 70));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Century Gothic"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #36ff00;\n"
"border-radius: 15px"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 20, 231, 111));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 11pt \"Lucida Console\";"));
        radioButton_4 = new QRadioButton(tab_3);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(20, 140, 297, 19));
        radioButton_4->setFont(font2);
        radioButton_4->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 10pt \"Lucida Console\";"));
        radioButton_5 = new QRadioButton(tab_3);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(20, 180, 277, 52));
        radioButton_5->setFont(font2);
        radioButton_5->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 10pt \"Lucida Console\";"));
        radioButton_6 = new QRadioButton(tab_3);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(20, 260, 193, 19));
        radioButton_6->setFont(font2);
        radioButton_6->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 10pt \"Lucida Console\";"));
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(75, 360, 200, 70));
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: #36ff00;\n"
"border-radius: 15px"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 20, 321, 111));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 11pt \"Lucida Console\";"));
        radioButton_7 = new QRadioButton(tab_4);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setGeometry(QRect(20, 130, 297, 19));
        radioButton_7->setFont(font2);
        radioButton_7->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 10pt \"Lucida Console\";"));
        radioButton_8 = new QRadioButton(tab_4);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setGeometry(QRect(20, 170, 297, 32));
        radioButton_8->setFont(font2);
        radioButton_8->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 10pt \"Lucida Console\";"));
        radioButton_9 = new QRadioButton(tab_4);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        radioButton_9->setGeometry(QRect(20, 220, 257, 32));
        radioButton_9->setFont(font2);
        radioButton_9->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 10pt \"Lucida Console\";"));
        radioButton_10 = new QRadioButton(tab_4);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));
        radioButton_10->setGeometry(QRect(20, 310, 321, 32));
        radioButton_10->setFont(font2);
        radioButton_10->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 10pt \"Lucida Console\";"));
        radioButton_11 = new QRadioButton(tab_4);
        radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));
        radioButton_11->setGeometry(QRect(20, 270, 185, 19));
        radioButton_11->setFont(font2);
        radioButton_11->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 10pt \"Lucida Console\";"));
        pushButton_4 = new QPushButton(tab_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(75, 360, 200, 70));
        pushButton_4->setFont(font3);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: #36ff00;\n"
"border-radius: 15px"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 20, 201, 131));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 11pt \"Lucida Console\";"));
        label_6 = new QLabel(tab_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 180, 251, 41));
        label_6->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        tabWidget->addTab(tab_5, QString());

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\320\237\321\200\320\270\320\262\320\265\321\202! \320\274\320\265\320\275\321\217 \320\267\320\276\320\262\321\203\321\202 \320\220\320\271\321\202\320\270\320\263\320\265\320\275\320\270\320\272. \320\257 \320\277\320\276\320\274\320\276\320\263\321\203 \321\202\320\265\320\261\320\265 \320\262\321\213\320\261\321\200\320\260\321\202\321\214 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\262 \320\275\320\260\321\210\320\265\320\271 \321\210\320\272\320\276\320\273\320\265. </p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\320\237\320\276\320\264\320\261\320\276\321\200 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ", nullptr));
        label_7->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Widget", "Tab 1", nullptr));
        radioButton->setText(QCoreApplication::translate("Widget", "\320\227\320\260\320\275\320\270\320\274\320\260\321\202\321\214\321\201\321\217 \321\202\320\262\320\276\321\200\321\207\320\265\321\201\321\202\320\262\320\276\320\274 \n"
"(\321\200\320\270\321\201\320\276\320\262\320\260\321\202\321\214, \320\273\320\265\320\277\320\270\321\202\321\214, \321\204\320\260\320\275\321\202\320\260\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214)", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">    \320\237\320\276\320\264\321\201\320\272\320\260\320\266\320\270, \320\277\320\276\320\266\320\260\320\273\321\203\320\271\321\201\321\202\320\260, </p><p align=\"center\">\321\207\321\202\320\276 \321\202\320\265\320\261\320\265 \320\275\321\200\320\260\320\262\320\270\321\202\321\201\321\217 \320\261\320\276\320\273\321\214\321\210\320\265?</p></body></html>", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Widget", "\320\234\320\265\321\207\321\202\320\260\321\216 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214, \n"
"\320\270\320\267\321\203\321\207\320\260\321\202\321\214 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274\321\213, \320\267\320\260\320\277\321\203\321\201\320\272\320\260\321\202\321\214 \321\200\320\260\320\272\320\265\321\202\321\213 \320\262 \n"
"\320\272\320\276\321\201\320\274\320\276\321\201!", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Widget", "\320\233\321\216\320\261\320\273\321\216 \321\202\320\262\320\276\321\200\321\207\320\265\321\201\321\202\320\262\320\276, \320\270 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265!", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\320\224\320\260\320\273\320\265\320\265 ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Widget", "Tab 2", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p>\320\230\321\202\320\260\320\272, \321\202\320\262\320\276\321\200\321\207\320\265\321\201\320\272\320\260\321\217 \320\273\320\270\321\207\320\275\320\276\321\201\321\202\321\214. \320\242\320\265\320\277\320\265\321\200\321\214 \320\277\320\276 \320\272\320\276\320\275\320\272\321\200\320\265\321\202\320\275\320\265\320\265:</p></body></html>", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Widget", "X\320\276\321\207\321\203 \321\200\320\270\321\201\320\276\320\262\320\260\321\202\321\214, \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\204\320\276\321\202\320\276.", nullptr));
        radioButton_5->setText(QCoreApplication::translate("Widget", "\320\245\320\276\321\207\321\203 \320\274\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\267\320\264\320\260\320\275\320\270\321\217, \320\277\321\200\320\265\320\264\320\274\320\265\321\202\321\213 \n"
"\320\270\320\275\321\202\320\265\321\200\321\214\320\265\321\200\320\260, \320\272\320\276\320\275\321\201\321\202\321\200\321\203\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\204\320\270\320\263\321\203\321\200\320\272\320\270 \320\270 \n"
"\320\277\320\265\321\207\320\260\321\202\320\260\321\202\321\214 \320\270\321\205 \320\275\320\260 3D - \320\277\321\200\320\270\320\275\321\202\320\265\321\200\320\265 ", nullptr));
        radioButton_6->setText(QCoreApplication::translate("Widget", "\320\245\320\276\321\207\321\203 \321\201\320\276\320\267\320\264\320\260\320\262\320\260\321\202\321\214 \320\274\321\203\320\267\321\213\320\272\321\203", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Widget", "Tab 3", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\320\243 \321\202\320\265\320\261\321\217 \321\201\320\265\321\200\321\214\321\221\320\267\320\275\321\213\320\265 \320\275\320\260\320\274\320\265\321\200\320\265\320\275\320\270\321\217, \320\274\320\276\320\271 \320\264\321\200\321\203\320\263! \320\242\320\265\320\277\320\265\321\200\321\214 \320\277\320\276\320\272\320\276\320\275\320\272\321\200\320\265\321\202\320\275\320\265\320\265:</p></body></html>", nullptr));
        radioButton_7->setText(QCoreApplication::translate("Widget", "\320\245\320\276\321\207\321\203 \320\264\320\265\320\273\320\260\321\202\321\214 \321\201\320\260\320\271\321\202\321\213, \320\262\320\265\320\261-\320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217.", nullptr));
        radioButton_8->setText(QCoreApplication::translate("Widget", "\320\245\320\276\321\207\321\203 \320\267\320\260\320\275\320\270\320\274\320\260\321\202\321\214\321\201\321\217 \320\276\320\261\321\200\320\260\320\261\320\276\321\202\320\272\320\276\320\271 \320\264\320\260\320\275\320\275\321\213\321\205, \n"
"\320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274\320\260\320\274\320\270 \320\270 \320\277\320\270\321\201\320\260\321\202\321\214 \321\201\320\265\321\200\321\214\320\265\320\267\320\275\321\213\320\271 \320\272\320\276\320\264", nullptr));
        radioButton_9->setText(QCoreApplication::translate("Widget", "\320\245\320\276\321\207\321\203 \321\201\320\276\320\267\320\264\320\260\320\262\320\260\321\202\321\214 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217 \320\264\320\273\321\217 \n"
"\321\201\320\274\320\260\321\200\321\202\321\204\320\276\320\275\320\276\320\262!", nullptr));
        radioButton_10->setText(QCoreApplication::translate("Widget", "\320\257 \320\277\320\276\320\272\320\260 \320\275\320\265 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\270\321\200\320\276\320\262\320\260\320\273(-\320\260) \320\270 \320\275\320\265 \320\267\320\275\320\260\321\216 \n"
"\321\207\320\265\320\263\320\276 \321\205\320\276\321\207\321\203", nullptr));
        radioButton_11->setText(QCoreApplication::translate("Widget", "\320\245\320\276\321\207\321\203 \321\201\320\276\320\267\320\264\320\260\320\262\320\260\321\202\321\214 \320\270\320\263\321\200\321\213!", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Widget", "Tab 4", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "<html><head/><body><p>\320\242\320\260\320\264\320\260\320\260\320\260\320\260!... \320\222\320\276\321\202 \321\207\321\202\320\276 \321\202\320\265\320\261\320\265 \320\277\321\200\320\265\320\264\320\273\320\260\320\263\320\260\320\265\321\202 \320\270\320\267\321\203\321\207\320\270\321\202\321\214 \320\220\320\271\321\202\320\270\320\263\320\265\320\275\320\270\320\272: </p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("Widget", "Tab 5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
