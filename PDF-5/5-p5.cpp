#include <iostream>
using namespace std;
int findMax(int a, int b, int c) 
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
    if (num < 0) return -1;
    if (num == 0 || num == 1) return num; 
    float precision = 0.00001; 
    float start = 0, end = num;
    float mid, ans;
    while (end - start > precision) {
    	
        mid = (start + end) / 2;
        ans = mid * mid;
        if (ans == num)
            return mid;
        else if (ans < num)
            start = mid;
        else
            end = mid;
    }
    return start;
}
void findComponents(int num) 
{
    cout << "Components of " << num << " are: ";
    for (int i = 1; i <= num; ++i) 
	{
        if (num % i == 0) 
		{
            cout << i << " ";
        }
    }
    cout << endl;
}
int main() 
{
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << "Maximum number: " << findMax(num1, num2, num3) << endl;

    cout << "Square of " << num1 << ": " << square(num1) << endl;

    float sqrtResult = squareRoot(num2);
    if (sqrtResult == -1)
        cout << "Cannot calculate square root of negative number." << endl;
    else
        cout << "Square root of " << num2 << ": " << sqrtResult << endl;

    cout << "Components of " << num3 << ": ";
    findComponents(num3);
    return 0;
}

