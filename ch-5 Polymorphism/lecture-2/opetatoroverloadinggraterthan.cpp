#include<iostream>
using namespace std;

class graterthan{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		
		graterthan operator>(graterthan n)
		{
			graterthan grater;
			
			grater.i=this->i>n.i;
			
			return grater;
		}
		
		void getgrater()
		{
			cout<<"graterthan of both number:- "<<this->i;
		}
};

int main()
{
	graterthan a1,a2;
	if(10>20)
	{
		cout<<"A2 IS MAX...";
	}
	else
	{
		cout<<"A1 IS MAX...";
	}
	return 0;
}
