#include "custombutton.h"
#include "QDebug"
CustomButton::CustomButton(QWidget *parent)
  : QPushButton(parent)
{
 setText("UwU");
}
CustomButton::~CustomButton()
{
  qDebug() << "Destruction !" << endl;
}

