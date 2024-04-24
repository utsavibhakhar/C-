#include<iostream>
using namespace std;
class Mother 
{
public:
    dispA() 
	{
        cout << "I am the mother." << endl;
    }
};
class Daughter : public Mother 
{
	public: 
	    dispB() 
		{
	        cout << "I am the daughter." << endl;
	    }
};
int main() 
{
	Daughter a1;
	
	a1.dispA();
	a1.dispB();
    return 0;
}

