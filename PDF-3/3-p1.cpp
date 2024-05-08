#include <iostream>
using namespace std;
int stringLength(char* str) 
{
    int length = 0;
    while (str[length] != '\0') 
	{
        length++;
    }
    return length;
}
void findCharFrequency(char* str, int freq[]) 
{
    int length = stringLength(str);
    for (int i = 0; i < length; ++i) 
	{
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') 
		{
            freq[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') 
		{
            freq[ch - 'A']++;
        }
    }
}
int main() 
{
    int MAX_CHARS = 26;
    char input[100];
    cout << "Enter a string: ";
    cin>>input;

    int freq[MAX_CHARS];
    findCharFrequency(input, freq);

    cout << "Frequency of characters:" << endl;
    for (char ch = 'a'; ch <= 'z'; ++ch) 
	{
        if (freq[ch - 'a'] > 0) {
            cout << ch << ": " << freq[ch - 'a'] << endl;
        }
    }
    char winner;
    int maxFrequency = 0;
    for (char ch = 'a'; ch <= 'z'; ++ch) 
	{
        if (freq[ch - 'a'] > maxFrequency) 
		{
            maxFrequency = freq[ch - 'a'];
            winner = 'D';
        } else if (freq[ch - 'a'] == maxFrequency) 
		{
            winner = 'N';
        }
    }
    if (winner == 'N') 
	{
        cout << "Winner: Nayan" << endl;
        cout << "Nayan bets ?1200 to Kartik" << endl;
    }
	else 
	{
        cout << "Winner: Dhruv" << endl;
        cout << "Dhruv bets ?1500 to Piyush" << endl;
    }
    return 0;
}

