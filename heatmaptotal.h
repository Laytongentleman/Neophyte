#ifndef HEATMAPTOTAL_H
#define HEATMAPTOTAL_H

#include <QObject>
#include <QWidget>

class Heatmaptotal : public QWidget
{
  Q_OBJECT
  public:
    Heatmaptotal(QWidget * parent = 0,const char* title = "",const char* path = "",int posx = 0, int posy = 0, char symb='*',int color = 134, bool showmonth = false );
    ~Heatmaptotal();
};
#endif //CU
