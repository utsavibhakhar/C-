#include <iostream>
using namespace std;
int main() 
{
    int balls[5];
    cout << "Enter the unique numbers attached to each ball:" << endl;
    for (int i = 5 - 1; i >= 0; i--) 
	{
        cout << "Ball: ";
        cin >> balls[i];
    }
    cout << "Balls arranged in reverse order:" << endl;
    for (int i = 0; i < 5; i++) 
	{
        cout << "Ball: "<< balls[i] << endl;
    }
    return 0;
}

