#include "json.h"
//a
Json::Json()
{
  QJsonArray basic_dev;
  basic_dev.push_back("Scratch");
  basic_dev.push_back("IT");
  basic_dev.push_back("Minecraft");
  basic_dev.push_back("App inventor");
  json.insert("Basic", basic_dev);

  QJsonArray art;
  art.push_back("Photoshop");
  art.push_back("Illustrator");
  art.push_back("After Effects");
  json.insert("Art", art);

  QJsonArray web_dev;
  web_dev.push_back("HTML & CSS");
  web_dev.push_back("JavaScript");
  web_dev.push_back("Node.js");
  web_dev.push_back("Python: Flask");
  json.insert("Web Development", web_dev);

  QJsonArray mobile_dev;
  mobile_dev.push_back("App Inventor");
  mobile_dev.push_back("Java");
  mobile_dev.push_back("Java: Android");
  mobile_dev.push_back("Unity");
  json.insert("Mobile development", mobile_dev);

  QJsonArray desktop_dev;
  desktop_dev.push_back("Python");
  desktop_dev.push_back("C++");
  desktop_dev.push_back("Java");
  desktop_dev.push_back("C#");
  json.insert("Desktop development", desktop_dev);

  QJsonArray game_dev;
  game_dev.push_back("Scratch");
  game_dev.push_back("Roblox");
  game_dev.push_back("Minecraft");
  game_dev.push_back("Python: Pygame");
  game_dev.push_back("Unity");
  game_dev.push_back("GameMaker");
  json.insert("Game development", game_dev);

  QJsonArray modelling;
  modelling.push_back("3D Tinkercad");
  modelling.push_back("Sculptris");
  modelling.push_back("3D Zbrush");
  json.insert("3D modelling", modelling);

}

bool Json::create_json()
{
    QJsonDocument json_doc(json);
    qDebug() << json_doc.toJson();

    QFile json_file("direction.json");

    if(!json_file.open(QIODevice::ReadWrite | QIODevice::Text))
        return false;

    QTextStream write(&json_file);
    write << json_doc.toJson();

    json_file.close();

    return true;
}
