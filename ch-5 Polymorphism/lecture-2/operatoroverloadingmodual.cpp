#include<iostream>
using namespace std;

class modual{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		
		modual operator%(modual n)
		{
			modual mod;
			
			mod.i=this->i%n.i;
			
			return mod;
		}
		
		void getmod()
		{
			cout<<"modual of both number:- "<<this->i;
		}
};

int main()
{
	modual a1,a2,a3;
	
	a1.setdata(10);
	a2.setdata(20);
	
	a3=a1%a2;
	
	a3.getmod();
	
	return 0;
}
