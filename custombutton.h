#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H

#include <QObject>
#include <QPushButton>

class CustomButton : public QPushButton
{
  Q_OBJECT
  public:
    CustomButton(QWidget * parent = 0);
    ~CustomButton();
};
#endif //CUSTOMBUTTTON_H
