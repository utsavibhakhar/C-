#include<iostream>
using namespace std;

class addition{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		
		addition operator+(addition n)
		{
			addition add;
			
			add.i=this->i+n.i;
			
			return add;
		}
		
		void getadd()
		{
			cout<<"addition of both number:- "<<this->i;
		}
};

int main()
{
	addition a1,a2,a3;
	
	a1.setdata(10);
	a2.setdata(20);
	
	a3=a1+a2;
	
	a3.getadd();
	
	return 0;
}
