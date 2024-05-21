#include <iostream>
using namespace std;
int main() 
{
    float principal, annualInterestRate, numberOfMonths;
    
    cout << "Enter principal amount: "; 
    cin >> principal;
    
    cout << "Enter annual interest rate (in percentage): "; 
    cin >> annualInterestRate;
    
    cout << "Enter number of months: "; 
    cin >> numberOfMonths;
    
    float monthlyInterestRate = annualInterestRate / (12 * 100);
    float denominator = 1;
    for(int i = 0; i < numberOfMonths; ++i)
        denominator *= (1 + monthlyInterestRate);
    
    float emi = (principal * monthlyInterestRate) / (1 - 1 / denominator);
    
    cout << "Monthly EMI: " << emi << endl;
    return 0;
}
