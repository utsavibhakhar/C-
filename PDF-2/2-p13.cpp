#include <iostream>
using namespace std;
float customPow(float base, int exponent) 
{
    float result = 1.0;
    for (int i = 0; i < exponent; i++) 
    {
        result *= base;
    }
    return result;
}
float customAbs(float value) 
{
    if (value < 0)
        return -value;
    return value;
}
float calculateEMI(float principal, float annualRate, int numberOfMonths) 
{
    float monthlyRate = annualRate / 12 / 100; // Convert annual rate to monthly rate
    float base = 1 + monthlyRate;
    float denominator = customPow(base, -numberOfMonths);
    float emi = (principal * monthlyRate) / (1 - denominator);
    return emi;
}
int main() 
{
    float principal; 
    float annualRate; 
    int numberOfMonths; 
    cout << "Welcome to the EMI Calculator for Car Loans!" << endl;
    cout << "Please enter the ex-showroom price of the car (in rupees): ";
    cin >> principal;
    cout << "Please enter the annual interest rate (in percentage): ";
    cin >> annualRate;
    cout << "Please enter the number of months for the loan term: ";
    cin >> numberOfMonths;
    
    float emi = calculateEMI(principal, annualRate, numberOfMonths);
    cout << "Your Equated Monthly Installment (EMI) is: " << emi << " rupees" << endl;
    return 0;
}

