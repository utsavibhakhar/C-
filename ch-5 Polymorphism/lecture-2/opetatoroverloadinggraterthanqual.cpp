#include<iostream>
using namespace std;

class graterthanequalto{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		
		graterthanequalto operator>=(graterthanequalto n)
		{
			graterthanequalto graterequal;
			
			graterequal.i=this->i>=n.i;
			
			return graterequal;
		}
		
		void getgraterequal()
		{
			cout<<"graterthanequalto of both number:- "<<this->i;
		}
};

int main()
{
	graterthanequalto a1,a2;
	if(10>=20)
	{
		cout<<"A2 IS MAX...";
	}
	else
	{
		cout<<"A1 IS MAX...";
	}
	return 0;
}
