#include "date_functions.h"

DateFunction::DateFunction(): day(1), dayOfWeek(1), month(1), year(2000) 
{}

bool DateFunction:: isLeapYear(int year)
{
    if( year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return true;
}

int DateFunction::dayCap(int month)
{
    switch(month)
    {
        case 2:
        {
            if(isLeapYear(year))
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

string DateFunction::monthToString(){
}


