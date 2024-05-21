#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string word;
    cout << "Enter a word: ";
    cin >> word;

    int vowelCount = 0, totalAscii = 0;
    for (int i = 0; i < word.length(); i++) 
    {
        char c = word[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowelCount++;
            totalAscii +=c;
            cout << c << " ";
        }
    }
    cout<<endl;
    float averageAscii = (vowelCount == 0) ? 0 :(totalAscii) / vowelCount;

    cout << "Total vowels: " << vowelCount <<endl;
    cout << "Average ASCII value of vowels: " << averageAscii<<endl;

    if (averageAscii >= 30) {
        cout << "The word is HARER."<<endl;
    } else if (averageAscii > 1) {
        cout << "The word is SOBER."<<endl;
    } else {
        cout << "The word is SMOOTHER."<<endl;
    }
    return 0;
}
