#include <iostream>
using namespace std;
int main() 
{
     int cashewsSoldPerMonth = 123500;
     int revenuePerMonth = 78000;
     int numberOfMonths = 3;
     int scaleFactor = 10;

    int totalCashews = cashewsSoldPerMonth * scaleFactor * numberOfMonths;
    int totalRevenue = revenuePerMonth * numberOfMonths * scaleFactor;

    int revenueOneMonth = revenuePerMonth * scaleFactor;

    float percentageIncrease = ((totalRevenue - revenueOneMonth) / revenueOneMonth) * 100;

    cout << "Total Revenue: ?" << totalRevenue << endl;
    cout << "Percentage Increase: " << percentageIncrease << "%" << endl;
    return 0;
}

