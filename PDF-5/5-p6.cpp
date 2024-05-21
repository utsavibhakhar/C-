#include <iostream>
using namespace std;
int reverseNumber(int number) 
{
    int reversedNumber = 0;
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
    return reversedNumber;
}
int main() 
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    reverseNumber(number);
    
    return 0;
}

