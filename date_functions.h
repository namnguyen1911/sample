#include <iostream>
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
        string monthToString(int month);
        string dayOfWeekToString(int dayOfWeek);
        int dayCap(int month);
        bool isLeapYear(int year);



};
