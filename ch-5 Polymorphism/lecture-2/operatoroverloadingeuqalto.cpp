#include<iostream>
using namespace std;

class equaltoequal{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		
		equaltoequal operator<=(equaltoequal n)
		{
			equaltoequal equalto;
			
			equalto.i=this->i<=n.i;
			
			return equalto;
		}
		
		void getequalto()
		{
			cout<<"equalto of both number:- "<<this->i;
		}
};

int main()
{
	equaltoequal a1,a2;
	if(10==20)
	{
		cout<<"A1 & A2 are equal...";
	}
	else
	{
		cout<<"A1 & A2 are not equal...";
	}
	return 0;
}
