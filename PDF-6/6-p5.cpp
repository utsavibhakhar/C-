#include <iostream>
using namespace std;
int main() {
    int side1 = 6;
    int side2 = 13;
    int hypotenuseSquared = side1 * side1 + side2 * side2;	//205
    int hypotenuse = 0;
    
    for (float i = 1; i * i <= hypotenuseSquared; i += 0.001) 
	{	
        hypotenuse = i;
    }
    cout<<"Length of the third side(hypotenuse):"<<hypotenuse<<"cm";	//205 square root is 14
    return 0;
}

