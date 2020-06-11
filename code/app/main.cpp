#include "widget.h"
#include "json.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    Json json;

    if(!json.create_json())
        qDebug("Failed to create json file");




    w.show();
    return a.exec();
}
