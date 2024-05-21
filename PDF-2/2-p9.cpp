#include <iostream>
using namespace std;
int main() 
{
    float weight, height;
    cout << "Enter weight (in kilograms): ";
    cin >> weight;
    cout << "Enter height (in meters): ";
    cin >> height;

    float bmi = weight / (height * height);
    cout << "BMI: " << bmi << endl;

    if (bmi < 18.5) 
    {
        cout << "Underweight" << endl;
    } 
    else if (bmi >= 18.5 && bmi < 25) 
    {
        cout << "Normal weight" << endl;
    } 
    else if (bmi >= 25 && bmi < 30) 
    {
        cout << "Overweight" << endl;
    } 
    else 
    {
        cout << "Obese" << endl;
    }
    return 0;
}
