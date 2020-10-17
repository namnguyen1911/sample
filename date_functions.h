#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class date_functions
{
    private:
        int dayOfWeek;
        int day;
        int month;
        int year;
        
    public:
        date_functions();
        string monthToString();
        string dayOfWeekToString();
        int dayCap();
        bool is_leap_year( int year);
        void print_consecutive_dates(int num, int delay_ms);


};
