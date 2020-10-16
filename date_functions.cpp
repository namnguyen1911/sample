#include "date_functions.h"

DateFunction::DateFunction(): day(1), dayOfWeek(1), month(1), year(2000) 
{}

bool DateFunction:: isLeapYear(int year)
{
    if( year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return true;

}

string DateFunction::monthToString(){
}


