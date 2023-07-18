#include "heatmaptotal.h"
#include <QLabel>
#include "heatmap.h"
#include "QDebug"

#include <cmath>
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
Heatmaptotal::Heatmaptotal(QWidget *parent,QString title,QString path,int posx , int posy, char symb,int* color, bool showmonth)
  : QWidget(parent)
{
 int year = 2023;
 QString month[12] = {"Jan","Fev","Mars","Avril","Mai","Juin","Juill","Aout","Sept","Oct","Nov","Dec"};
  
 int monthsize[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
 if ((year %4 == 0 && year %100 != 0) || year %400 == 0) { 
   monthsize[1] = 29;
 }


 for (int k = 0 ; k <12; k++){
 QLabel* t = new QLabel(parent);
 t->setText(month[k]);
 t->move(posx+k*4.3*14,posy-28);
 }
 int yoff = posy;
 QLabel* name = new QLabel(parent);
 name->setText(title);
 name->setMinimumSize(500,0);
 name->move(posx ,posy-50);



QFile file(path);


  int beststreak = -1;
if(file.open(QFile::ReadOnly | QFile::Text))
  {
QString line;
QTextStream s1(&file);
 //QString all = s1.readAll();
//printf("%s", all);
  QLabel* m_label = new QLabel(parent);
 /* line = s1.readLine();
  m_label->setText(line);
  m_label->setGeometry(30,30,800,800);
*/

  
  Heatmap * harray[12][31]; 
   for (int i =0 ; i < 53;i++){
     for(int j = 0; j < 7; j++){
       if ((1+j)+(i)*7 <= 366) {
 //int a = rand()%255;
char buff[400];
  snprintf(buff, sizeof(buff), "QPushButton { border: none; border-radius: 1px; background-color: hsl(%d, %d%, 100% );}*:hover{border: 1rem solid;background-color: hsl(%d, %d%, 70% );}",color[0],color[1],color[0],color[1]);
  std::string buffAsStdStr = buff;
  Heatmap* test = new Heatmap(parent);
  test->move(posx + i*14,yoff + j*14);
 test->resize(10,10);
 char date[20];
 int c = i*7+(j+1);
 int potmonth = 0;
 while (c > monthsize[potmonth]){
   c = c - monthsize[potmonth];
   if (potmonth < 11) {potmonth++;} else {potmonth = 0;}
 }
 
 snprintf(date, sizeof(date), "%d %s", c,  month[potmonth].toUtf8().constData()
) ;

  test->setToolTip(date);

   test->setStyleSheet(buff);
   harray[potmonth][c] = test;
  }
}
}
    bool registering = false;
    int d=0;
    int m=0;

 int score = 0;
  int totalscore = 0;
  int nbdays = 0;
  int streak = -1;
  int sousstreak = -1;

  bool streakbroken = false;
  bool streakok = true;
  int i = 0;
  while(!s1.atEnd()) {
    i++;

  QLabel* m_label = new QLabel(parent);
  line = s1.readLine();
 /* m_label->setText(line);
  m_label->setGeometry(30+i*10,30+i*10,800,800);*/
    //Qstring linep = line->toPlainText();
    string sLine = line.toUtf8().constData();
    if (sLine[0] == '|') {
      if (registering == true){
        char buff[400];
        nbdays++;
        int a = min((int)(score),15);

  snprintf(buff, sizeof(buff), "QPushButton { border: none; border-radius: 1px; background-color: hsl(%d, %d%, %d% );}*:hover{border: 1rem solid;background-color: hsl(%d, %d, 50% );}",color[0],color[1],max(40,100-((int)(a)*7+color[2])),color[0],color[1]);
  
   harray[m][d]->setStyleSheet(buff);
      }
      struct tm tm;
           //char buf[255];
           sLine.erase(0,1);
           memset(&tm, 0, sizeof(tm));
          const char * sline2 = sLine.c_str();
           strptime(sline2, "%Y-%m-%d %H:%M:%S", &tm);
            // des pistes à explorer pour mieux mettre la date auto dans le fichier mathsquicktext
           //strftime(buf, sizeof(buf), "%d %b %Y %H:%M", &tm);
           //puts(buf);
           d = tm.tm_mday;
           m =tm.tm_mon ;
           // on brise la streak que si la streak est brisé avant aujourd'hui et pas le futur
   

          if (streakok){
            sousstreak++;
              if (sousstreak > beststreak){beststreak = sousstreak;}
          }else{sousstreak = 0;}
            // pour streak depuis auj:
           if (not streakbroken  )  {
           if (streakok){
           streak++;
           if (streak > beststreak){
           }
           }
           else{
             streakbroken = true;
           }

           }
           streakok = false;
           registering = true;

           score = 0;
    }
    else{
      int countch = 0;
      int l = sLine.length();
      for (int i = 0; i < l;i++) {
        if (sLine[countch] == symb){ score++;totalscore++; streakok = true;}
        countch++;
        if (sLine[countch] == '_'){ score--;}

      }
    }
  }
      if (registering == true){
        streakok = true;
        char buff[400];
        int a = min((int)(score*25),255);
  snprintf(buff, sizeof(buff), "QPushButton { border: none; border-radius: 1px; background-color: hsl(%d, %d%, %d% );}*:hover{border: 1rem solid;background-color: hsl(%d, %d, 50% );}",color[0],color[1],max(40,100-((int)(a)*7+color[2])),color[0],color[1]);
  harray[m][d]->setStyleSheet(buff);
      } 

 QLabel* curstreak = new QLabel(parent);
 char buff[50];
 snprintf(buff, sizeof(buff), "Streak : %d", streak);

 curstreak->setText(buff);
 curstreak->setGeometry(posx+170,posy-75,800,80);

 QLabel* beststreaklabel = new QLabel(parent);
 buff[50];
 snprintf(buff, sizeof(buff), "Best : %d", beststreak);
 beststreaklabel->setText(buff);
 beststreaklabel->setGeometry(posx+320,posy-75,800,80);
 
 float avg = (float)totalscore/(float)nbdays;
 QLabel* avg_label = new QLabel(parent);
 buff[50];
 snprintf(buff, sizeof(buff), "Avg : %.2f", avg);
 avg_label->setText(buff);
 avg_label->setGeometry(posx+470,posy-75,800,80);


}
   else
    {
    qDebug()<<file.errorString()<<file.error();
    }



}
Heatmaptotal::~Heatmaptotal()
{
  qDebug();
}
