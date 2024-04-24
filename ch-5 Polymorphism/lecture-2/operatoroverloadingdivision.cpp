#include<iostream>
using namespace std;

class division{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		
		division operator/(division n)
		{
			division div;
			
			div.i=this->i/n.i;
			
			return div;
		}
		
		void getdiv()
		{
			cout<<"division of both number:- "<<this->i;
		}
};

int main()
{
	division a1,a2,a3;
	
	a1.setdata(10);
	a2.setdata(20);
	
	a3=a1/a2;
	
	a3.getdiv();
	
	return 0;
}
