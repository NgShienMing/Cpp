#include <iostream>
using namespace std;

string getDayOfWeek(int dayNum)
{
    string dayName;
    switch (dayNum)
    {
        case 1: 
            dayName = "Monday";
            break;
        case 2: 
            dayName = "Tuesday";
            break;
        case 3: 
            dayName = "Wednesday";
            break;
        case 4: 
            dayName = "Thursday";
            break;
        case 5: 
            dayName = "Friday";
            break;
        case 6: 
            dayName = "Saturday";
            break;
        case 7: 
            dayName = "Sunday";
            break;
        default:
            dayName = "Looking forward to the weekend!";
            break;
    }
    return dayName;
}

int main()
{
    int dayNum;
    cout << "Enter the number of day in this week: ";
    cin >> dayNum;
    string dayOfWeek = getDayOfWeek(dayNum);
    cout << dayOfWeek;
    return 0;
}