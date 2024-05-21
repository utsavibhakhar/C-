#include <iostream>
using namespace std;
void transferCoins(int bowl1, int bowl2) 
{
    int temp = bowl1;
    bowl1 = bowl2;
    bowl2 = temp;
}
int main() 
{
    int bowl1 = 1;  
    int bowl2 = 1; 

    cout << "Initial state:" << endl;
    cout << "Bowl 1: " << (bowl1 == 1 ? "Has a coin" : "Empty") << endl;
    cout << "Bowl 2: " << (bowl2 == 1 ? "Has a coin" : "Empty") << endl;
    
    transferCoins(bowl1, bowl2);

    cout <<endl<< "Final state after transferring coins:" << endl;
    cout << "Bowl 1: " << (bowl1 == 1 ? "Has a coin" : "Empty") << endl;
    cout << "Bowl 2: " << (bowl2 == 1 ? "Has a coin" : "Empty") << endl;

    return 0;
}