#include "widget.h"
//a
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    w.setWindowTitle("ItGenio Alpha 0.5a");
    w.setWindowIcon(QIcon(":/itgenik.jpg"));
    w.setFixedSize(350, 500);

    Json json;

    if(!json.create_json())
        qDebug("Failed to create json file");



    w.show();
    return a.exec();
}
