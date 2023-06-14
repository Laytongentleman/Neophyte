#include "heatmap.h"
#include "QDebug"
Heatmap::Heatmap(QWidget *parent)
  : QPushButton(parent)
{
 setText("");
}
Heatmap::~Heatmap()
{
  qDebug();
}
