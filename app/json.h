#ifndef JSON_H
#define JSON_H
//a
#include <QVariantMap>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>
#include <QFile>
#include <QIcon>
#include <QWidget>
#include <QTextDocument>
#include <QFont>
#include <QSize>
#include <QDebug>
#include <QMessageBox>
#include <QRandomGenerator>
#include <QImage>
//#include <QPallette>
class Json
{
private:
   QJsonObject json;

public:
    Json();
    bool create_json();
};

#endif // JSON_H
