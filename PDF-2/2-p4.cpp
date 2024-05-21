#include <iostream>
using namespace std;
int main() 
{
    float base = 56; 
    float height = 21;
    float area = 0.5 * base * height;
    int num =area;
    int sum = 0;
    
    while (num != 0) 
    {
        sum += num % 10;
        num /= 10;
    }
    cout << "Area of the triangle: " << area << " square units" << endl;
    cout << "Sum of all digits of the area: " << sum;
    return 0;
}
