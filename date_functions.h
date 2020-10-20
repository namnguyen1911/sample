#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class DateFunction
{
private:
    int day;
    int month;
    int year;
    const int month_cap = 12;

public:
    DateFunction();
    string monthToString();
    string dayOfWeekToString(int number);
    int dayCap();
    bool is_leap_year(int year);
    void print_consecutive_dates(int num, int delay_ms);
};
