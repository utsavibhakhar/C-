#include <iostream>
#include <string>
using namespace std;

string identifyCharacter(char ch) 
{
    if (isalpha(ch)) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
			{
            return "vowel";
        	} 
		else 
		{
            return "consonant";
        }
    } 
	else if (isdigit(ch)) 
	{
        return "digit";
    }
	else if (ispunct(ch)) 
	{
        return "special symbol";
    } else 
	{
        return "other";
    }
}
int main() 
{
    string input = "Hello World! 123";
    for (int i = 0; i < input.length(); i++) 
	{
        char ch = input[i]; 
        cout << "'" << ch << "' is a " << identifyCharacter(ch) << endl;
    }
    return 0;
}

