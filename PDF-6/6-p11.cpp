#include <iostream>
#include <string>
using namespace std;
bool isLeapYear(int year) {
    return (year % 4 == 0);
}
int getDaysInMonth(int month, int year) 
{
    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 31;
    }
}
int getDayOfYear(int day, int month, int year) {
    int days = day;
    for (int i = 1; i < month; i++)
	{
        days += getDaysInMonth(i, year);
    }
    return days;
}
string getFestival(int day, int month, int year) {
    int dayOfYear = getDayOfYear(day, month, year);
    switch (dayOfYear) {
        case 1:
            return "New Year";
        case 14:
            return "Makar Sankranti";
        case 26:
            return "Republic Day";
        case 11:
            return "Rakhi";
        case 15:
            return "Independence Day";
        case 2:
            return "Gandhi Jayanti";
        case 25:
            return "Christmas";
        default:
            return "No festival";
    }
}
int main()
{
    int day, month, year;
    cout << "Enter the day, month, and year (DD MM YYYY): ";
    cin >> day >> month >> year;

    if (day < 1 || month < 1 || month > 12 || year < 1) 
	{
        cout << "Invalid date!" << endl;
        return 1;
    }
    string festival = getFestival(day, month, year);

    cout << "On " << day << "/" << month << "/" << year << ": " << festival << endl;
    return 0;
}

