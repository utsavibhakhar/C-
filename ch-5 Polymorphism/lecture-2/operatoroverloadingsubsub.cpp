#include<iostream>
using namespace std;
class subsub{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		subsub operator--()
		{
			subsub sub;
			
			sub.i=--i;
			
			return sub;
		}
		void getsub()
		{
			cout<<"subsub of both number:- "<<this->i;
		}
};
int main()
{
	subsub a1,a2;
	int n;
	cout<<"enter n:- ";
	cin>>n;
	
	a1.setdata(n);
	a2=a1;
	
	--a2;
	
	a2.getsub();
	
	return 0;
}
