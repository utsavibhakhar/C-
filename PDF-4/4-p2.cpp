#include <iostream>
using namespace std;
int main() 
{
    int killingScores[10];
    for (int i = 0; i < 10; i++) 
	{
        cout << "Soldier: ";
        cin >> killingScores[i];
    }
    int max = 0;
    for (int i = 1; i < 10; ++i) 
	{
        if (killingScores[i]>max) 
		{
            max = killingScores[i];
        }
    }
    cout<<"Soldier has the highest killing score is: "<<max;
    return 0;
}

