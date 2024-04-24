#include<iostream>
using namespace std;

class lessthan{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		
		lessthan operator<(lessthan n)
		{
			lessthan less;
			
			less.i=this->i<n.i;
			
			return less;
		}
		
		void getless()
		{
			cout<<"lessthan of both number:- "<<this->i;
		}
};

int main()
{
	lessthan a1,a2;
	if(10<20)
	{
		cout<<"A2 IS MAX...";
	}
	else
	{
		cout<<"A1 IS MAX...";
	}
	return 0;
}
