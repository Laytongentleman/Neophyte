#include <ctime>
#include <iostream>
#include<fstream>
#include <QStandardPaths>
#include <stdio.h>
#include <time.h>
using namespace std;


void update_date()
{
  QString path = QStandardPaths::writableLocation(QStandardPaths::DataLocation) + "/Neophyte/";
    /*delete all problems */

std::ofstream ofs;
QString path_date = path +"date.txt";

std::string path_date_str = path_date.toUtf8().constData();
const char * c = path_date_str.c_str();
ofs.open(c, std::ofstream::out | std::ofstream::trunc);
ofs.close();
   FILE * fp;

   /* open the file for writing*/
   fp = fopen(c,"w");
 
   /* write time as text into the file stream*/
   char cur_time[128];
  
   time_t      t;
   struct tm*  ptm;
  
   t = time(NULL);
   ptm = localtime(&t);
   
   strftime(cur_time, 128, "%Y-%m-%d %H:%M:%S", ptm);
   
   fprintf(fp, "%s\n", cur_time);
   
   /* close the file*/  
   fclose(fp);

    std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result))
              << result << " seconds since the Epoch\n";
}
