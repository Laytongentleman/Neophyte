#ifndef HEATMAPTOTAL_H
#define HEATMAPTOTAL_H

#include <QObject>
#include <QWidget>
#include "ui_mainwindow.h"
#include "mainwindow.h"



class Heatmaptotal : public QWidget
{
  Q_OBJECT
  public:
    Heatmaptotal(QWidget * parent = 0, QString title = "",QString path = "",int posx = 0, int posy = 0, char symb='*',int* color = NULL, bool showmonth = false );
    ~Heatmaptotal();

};
#endif //CU
