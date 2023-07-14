#ifndef SKILLS_H
#define SKILLS_H
#include <QString>

class Skill {
  public:
    QString name;
    int id;
    QString txtpath;
    int * hsl;
    Skill(QString name, int id, QString txtpath, int* hsl) : name(name), id(id), txtpath(txtpath), hsl(hsl) { }

};
#endif
