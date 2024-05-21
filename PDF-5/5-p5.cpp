#include <iostream>
using namespace std;
int maximum(int a, int b, int c) 
{
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
int square(int num) 
{
    return num * num;
}
float squareRoot(int num) 
{
    if (num < 0) {
        cout << "Cannot calculate square root of a negative number." << endl;
        return 0.0;
    }
    float guess = num / 2.0;
    float prevGuess;
    do {
        prevGuess = guess;
        guess = (guess + num / guess) / 2;
    } while (prevGuess != guess);
    return guess;
}
void findComponents(int num) 
{
    cout << "Components of " << num << ":" << endl;
    for (int i = 1; i <= num; i++) 
    {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main() 
{
    int choice;
    int num, a, b, c;

    do {
        cout << "\nScientific Calculator Functionalities:" << endl;
        cout << "1. Find maximum of three numbers" << endl;
        cout << "2. Square of a given number" << endl;
        cout << "3. Square root of a given number" << endl;
        cout << "4. Find components of a given number" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter three numbers separated by space: ";
                cin >> a >> b >> c;
                cout << "Maximum of "<< maximum(a, b, c) << endl;
                break;
            case 2:
                cout << "Enter a number: ";
                cin >> num;
                cout << "Square of " << num << " is: " << square(num) << endl;
                break;
            case 3:
                cout << "Enter a number: ";
                cin >> num;
                cout << "Square root of " << num << " is: " << squareRoot(num) << endl;
                break;
            case 4:
                cout << "Enter a number: ";
                cin >> num;
                findComponents(num);
                break;
            case 5:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }
    } while(choice != 5);
    return 0;
}

