#include <iostream>
#include <string>
using namespace std;
string findAndReplace(string input, char find, char replace) 
{
    string result = input;
    for (int i = 0; i < result.length(); i++) 
	{
        if (result[i] == find) 
		{
            result[i] = replace;
        }
    }
    return result;
}
int main() 
{
    string message = "Find and Replace mechanism for any given message or string.";
    cout << "Original message: " << message << endl;
    string replacedMessage = findAndReplace(message, '2', 'X');
    cout << "After replacement: " << replacedMessage << endl;
    return 0;
}

