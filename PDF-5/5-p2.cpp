#include <iostream>
using namespace std;
int factorial(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
void calculateFactorialInRange(int start, int end) 
{
    if (start > end) 
    {
        cout << "Invalid range!" << endl;
        return;
    }
    cout << "Factorials between " << start << " and " << end << ":" << endl;
    for (int i = start; i <= end; i++) 
    {
        cout << "Factorial of " << i << " = " << factorial(i) << endl;
    }
}
int main() 
{
    int start, end;
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;
    calculateFactorialInRange(start, end);
    return 0;
}

