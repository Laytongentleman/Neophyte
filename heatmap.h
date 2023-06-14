#ifndef HEATMAP_H
#define HEATMAP_H

#include <QObject>
#include <QPushButton>

class Heatmap : public QPushButton
{
  Q_OBJECT
  public:
    Heatmap(QWidget * parent = 0);
    ~Heatmap();
};
#endif //CUSTOMBUTTTON_H
