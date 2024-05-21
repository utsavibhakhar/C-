#include <iostream>
using namespace std;
void fibonacciSeries(int n) 
{
    int a = 0, b = 1, c;
    cout << "Fibonacci Series up to " << n << " is:" <<endl;
    while (a <= n) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}
int main() 
{
    int limit;
    cout << "Enter the limit for Fibonacci series: ";
    cin >> limit;
    fibonacciSeries(limit);
    return 0;
}

