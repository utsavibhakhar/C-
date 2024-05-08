#include <iostream>
using namespace std;
int main() 
{
    int hour, minute;
    cout << "Enter the time (24-hour format, HH MM): ";
    cin >> hour >> minute;
    
    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) 
	{
        cout << "Invalid time input!" << endl;
        return 1;
    }
    if (hour == 0)
        hour = 12;
    else if (hour > 12)
        hour -= 12;
    cout << "Converted time: " << hour << ":" << (minute < 10 ? "0" : "") << minute << " " << (hour < 12 ? "AM" : "PM") << endl;
    return 0;
}

