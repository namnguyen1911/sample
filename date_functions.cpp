#include "date_functions.h"

DateFunction::DateFunction(): day(1), dayOfWeek(1), month(1), year(2000) 
{}

bool DateFunction:: isLeapYear()
{
    if( year % 4 == 0 && year % 100 != 0 || year % 400 == 0) return true;
    return false;
}

int DateFunction::dayCap()
{
    switch(month)
    {
        case 2:
        {
            if(isLeapYear())
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

string DateFunction::dayOfWeekToString(){
    int DoW = dayOfWeek % 7;
    switch (DoW){
        case 1: return "Sunday"; break;
        case 2: return "Monday"; break;
        case 3: return "Tuesday"; break;
        case 4: return "Wednesday"; break;
        case 5: return "Thursday"; break;
        case 6: return "Friday"; break;
        case 0: return "Saturday"; break;
    }
}


