#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class DateFunction
{
    private:
        int dayOfWeek;
        int day;
        int month;
        int year;
        
    public:
        DateFunction();
        string monthToString();
        string dayOfWeekToString();
        int dayCap();
        bool isLeapYear( int year);
        void print_consecutive_dates(int num, int delay_ms);


};
