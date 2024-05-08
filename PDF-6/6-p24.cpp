#include <iostream>
using namespace std;
class Swapper 
{
public:
    Swapper(int *a, int *b) 
	{
        *a=*a+*b; 
        *b = *a-*b;
        *a = *a-*b;
    }
};

int main() 
{
    int x,y;
    cout<<"Enter number:";
    cin>>x;
    cout<<"Enter number:";
    cin>>y;
    cout << "Before swapping: x = " << x << ", y = " << y <<endl;
    Swapper swap(&x, &y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}

