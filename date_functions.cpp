#include "date_functions.h"
#include <iostream>

using namespace std;

date_functions::date_functions() {
    day = 0;
    dayOfWeek = 0;
    month = 1;
    year = 2000;
}

void date_functions::print_consecutive_dates(int num, int delay_ms){
    int const month_Cap = 12;
    int day_Cap = dayCap();

    cout << dayOfWeekToString() << ", " << monthToString() << " " << day << ", " << year << endl;

    for (;num > 0; num--){
        if((month_Cap - month) != 0){
            if((day_Cap - day) != 0){
                dayOfWeek++;
                day++;
                cout << dayOfWeekToString() << ", " << monthToString() << " " << day << ", " << year << endl;
            }
            else{
                day = 1;
                month++;
            }
        }
        else{
            month = 1;
            year++;
        }
    }
}

bool date_functions:: is_leap_year( int year)
{
    if( year % 4 == 0 && year % 100 != 0 || year % 400 == 0) return true;
    return false;
}

int date_functions::dayCap()
{
    switch(month)
    {
        case 2:
        {
            if(is_leap_year(year))
                return 29;
            else
                return 28;    
            break;               
        }
        case 4: case 6: case 9: case 11: return 30; break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31; break;
        default: return 0;
    }

}

string date_functions::monthToString(){
    switch(month){
        case 1: return "Jannuary"; break;
        case 2: return "February"; break;
        case 3: return "March"; break;
        case 4: return "April"; break;
        case 5: return "May"; break;
        case 6: return "June"; break;
        case 7: return "July"; break;
        case 8: return "August"; break;
        case 9: return "September"; break;
        case 10: return "October"; break;
        case 11: return "November"; break;
        case 12: return "December"; break;
        default: return "Invalid Month"; break;
    }
}

string date_functions::dayOfWeekToString(){
    int DoW = dayOfWeek % 7;
    switch (DoW){
        case 1: return "Sunday"; break;
        case 2: return "Monday"; break;
        case 3: return "Tuesday"; break;
        case 4: return "Wednesday"; break;
        case 5: return "Thursday"; break;
        case 6: return "Friday"; break;
        case 0: return "Saturday"; break;
        default: return "Dnvalid Day of Week"; break;
    }
}


