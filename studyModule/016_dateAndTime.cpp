#include<iostream>
#include<ctime> // Import the ctime library that allow to work with time and date.
using namespace std;

int main() {
    struct tm datatime;
    time_t timestamp;

    time(&timestamp);
    cout << ctime(&timestamp);

    datatime.tm_year = 2023 - 1900;
    datatime.tm_mon = 12 - 1;
    datatime.tm_mday = 17;
    datatime.tm_hour = 12;
    datatime.tm_min = 30;
    datatime.tm_sec = 1;

    datatime.tm_isdst = -1;

    timestamp = mktime(&datatime);

    cout << ctime(&timestamp);
}