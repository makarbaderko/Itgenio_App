#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    w.setWindowTitle("ItGenio Alpha 0.5a");
    w.setWindowIcon(QIcon(":/itgenik.jpg"));
    w.setFixedSize(900, 640);

    Json json;

    if(!json.create_json())
        qDebug("Failed to create json file");

    /*QImage img("itgenik.jpg");
    QImage image = img.scaled(200, 300, Qt::KeepAspectRatio);*/




    w.show();
    return a.exec();
}
