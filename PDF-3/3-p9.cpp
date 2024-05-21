#include <iostream>
#include <string>
using namespace std;
int main() {
    string username;
    cout << "Enter your Instagram username: ";
    cin >> username;

    string filteredUsername;
    for (int i = 0; i < username.length(); i++) {
        char c = username[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            filteredUsername += c;
        }
    }
    cout << "Filtered username: " << filteredUsername << endl;
    return 0;
}
