#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string player1Dare, player2Dare;
    cout << "Player 1, enter your dare work: ";
    cin >> player1Dare;

    cout << "Player 2, enter your dare work: ";
    cin >> player2Dare;

    string temp = player1Dare;
    player1Dare = player2Dare;
    player2Dare = temp;

    cout << "\nSwapped dare works:" << endl;
    cout << "Player 1's dare work: " << player1Dare << endl;
    cout << "Player 2's dare work: " << player2Dare << endl;
    return 0;
}

