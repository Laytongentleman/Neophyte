#include <ctime>
#include <iostream>
#include<fstream>
#include <QStandardPaths>
#include <stdio.h>
#include <time.h>
#include <chrono>
using namespace std;
// C++ Program to implement Date and Time Parsing using
// chrono
#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;


// function to parse a date or time string.
chrono::system_clock::time_point GFG(const string& datetimeString, const string& format)
{
    tm tmStruct = {};
    istringstream ss(datetimeString);
    ss >> get_time(&tmStruct, format.c_str());
    return chrono::system_clock::from_time_t(
        mktime(&tmStruct));
}
 
// Function to format a time_t value into a date or time string.
string DateTime(const chrono::system_clock::time_point& timePoint,
         const string& format)
{
    time_t time
        = chrono::system_clock::to_time_t(timePoint);
    tm* timeinfo = localtime(&time);
    char buffer[70];
    strftime(buffer, sizeof(buffer), format.c_str(),
             timeinfo);
    return buffer;
}

void update_date()
{
  QString path = QStandardPaths::writableLocation(QStandardPaths::DataLocation) + "/neophyte/";
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
   ptm->tm_mday+=1;
   time_t t2=mktime(ptm);
   ptm=localtime(&t2);

   
   strftime(cur_time, 128, "%Y-%m-%d %H:%M:%S", ptm);
   
   fprintf(fp, "%s\n", cur_time);
   
   /* close the file*/  
   fclose(fp);

    std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result))
              << result << " seconds since the Epoch\n";


 
    const string datetimeString = "2023-05-22 12:24:52";
    const string format = "%Y-%m-%d %H:%M:%S";
    chrono::system_clock::time_point parsedTime
        = GFG(datetimeString, format);
    string formattedTime = DateTime(parsedTime, format);
    /*cout << "Parsed Time---> "
         << chrono::system_clock::to_time_t(parsedTime)
         << endl;*/
    cout << "Formatted Time---> " << formattedTime << endl;

}

