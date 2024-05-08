#include <iostream>
using namespace std;
float areaOfTriangle(int base, int height) 
{
    return 0.5 * base * height;
}
int sumOfDigits(int number) 
{
    int sum = 0;
    while (number != 0) 
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}
int main() 
{
    int base = 56; 
    int height = 21; 
    int area = areaOfTriangle(base, height);
    cout << "Area of the triangle: " << area << " square units" << endl;
    int areaInt =(area);
    int sum = sumOfDigits(areaInt);
    cout << "Sum of digits in the area: " << sum << endl;
    return 0;
}

