#include<iostream>
using namespace std;

class multiplication{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		
		multiplication operator*(multiplication n)
		{
			multiplication mul;
			
			mul.i=this->i*n.i;
			
			return mul;
		}
		
		void getmul()
		{
			cout<<"multiplication of both number:- "<<this->i;
		}
};

int main()
{
	multiplication a1,a2,a3;
	
	a1.setdata(10);
	a2.setdata(20);
	
	a3=a1*a2;
	
	a3.getmul();
	
	return 0;
}
