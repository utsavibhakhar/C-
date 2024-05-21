#include <iostream>
using namespace std;
int main() 
{
    char input[1000];
    int freq[256] = {0};
    cout << "Enter a string: ";
    cin>>input;

    for (int i = 0; input[i] != '\0'; i++) {
        char ch = input[i];
        if ((ch >= 'A' && ch <= 'Z')) {
            ch = ch + 32; 
        }
        if ((ch >= 'a' && ch <= 'z')) {
            freq[ch]++;
        }
    }
    cout << "Character frequencies:" << endl;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << (char)i << ": " << freq[i] << endl;
        }
    }
   char winner;
    int maxFrequency = 0;
    for (char ch = 'a'; ch <= 'z'; ch++) 
	{
        if (freq[ch - 'a'] > maxFrequency) 
	{
            maxFrequency = freq[ch - 'a'];
            winner = 'D';
        } 
	else if (freq[ch - 'a'] == maxFrequency) 
	{
            winner = 'N';
        }
    }
    if (winner == 'N') 
	{
        cout << "Winner: Nayan" << endl;
        cout << "Nayan bets 1200 to Kartik" << endl;
    }
	else 
	{
        cout << "Winner: Dhruv" << endl;
        cout << "Dhruv bets 1500 to Piyush" << endl;
    }

    return 0;
}
