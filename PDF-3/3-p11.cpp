#include <iostream>
#include <string>
using namespace std;
string encryptMessage(string message, int key) 
{
    string encryptedMessage = "";
    int length = message.length();
    for (int i = 0; i < length; i++) 
	{
        char encryptedChar = message[i] + key;
        encryptedMessage += encryptedChar;
    }
    return encryptedMessage;
}
string decryptMessage(string encryptedMessage, int key) 
{
    string decryptedMessage = "";
    int length = encryptedMessage.length();
    for (int i = 0; i < length; i++) 
	{
        char decryptedChar = encryptedMessage[i] - key;
        decryptedMessage += decryptedChar;
    }
    return decryptedMessage;
}
int main() 
{
    int key = 5;
    string message = "Indian Army is the best!";
    string encryptedMessage = encryptMessage(message, key);
    cout << "Encrypted message: " << encryptedMessage << endl;
    string decryptedMessage = decryptMessage(encryptedMessage, key);
    cout << "Decrypted message: " << decryptedMessage << endl;
    return 0;
}

