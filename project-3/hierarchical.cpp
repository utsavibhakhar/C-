#include<iostream>
using namespace std;
class calculate
{
	public:
		int n;
		dispA()
		{	
			cout<<"Enter the value of number:";
			cin>>n;	
		}
};
class square : public calculate
{
	public:
	int square;
		dispB()
		{
			square = n*n;
			cout<<"Sqaure: "<<square<<endl;	
		}	
};
class cube : public calculate
{
	public:
	int cube;
		dispC()
		{
			cube =n*n*n;
			cout<<"Cube: "<<cube<<endl;	
		}	
};
int main()
{
	square s1;
	cube c1;
	
	s1.dispA();
	s1.dispB();
	
	c1.dispA();
	c1.dispC();	
}
