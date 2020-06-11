#ifndef JSON_H
#define JSON_H

#include <QVariantMap>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>
#include <QFile>

class Json
{
private:
   QJsonObject json;

public:
    Json();
    bool create_json();
};

#endif // JSON_H
