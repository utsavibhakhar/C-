#include<iostream>
using namespace std;

class substraction{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		
		substraction operator-(substraction n)
		{
			substraction sub;
			
			sub.i=this->i-n.i;
			
			return sub;
		}
		
		void getsub()
		{
			cout<<"substraction of both number:- "<<this->i;
		}
};

int main()
{
	substraction a1,a2,a3;
	
	a1.setdata(10);
	a2.setdata(20);
	
	a3=a1-a2;
	
	a3.getsub();
	
	return 0;
}
