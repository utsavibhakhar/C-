#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the starting value: ";
    cin >> m;
    cout << "Enter the ending value: ";
    cin >> n;
    if (m <= n)
    {
        cout<< "Multiplication Tables between " << m << " and " << n << ":" << endl;
        for (int i = m; i <= n; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                cout << i << " x " << j << " = " << i * j << endl;
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Invalid input. The starting value should be less than or equal to the ending value." << endl;
    }
    return 0;
}
