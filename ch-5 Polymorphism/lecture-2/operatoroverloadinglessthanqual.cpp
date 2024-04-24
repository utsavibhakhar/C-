#include<iostream>
using namespace std;

class lessthanequalto{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		
		lessthanequalto operator<=(lessthanequalto n)
		{
			lessthanequalto lessequal;
			
			lessequal.i=this->i<=n.i;
			
			return lessequal;
		}
		
		void getlessequal()
		{
			cout<<"lessthanequalto of both number:- "<<this->i;
		}
};

int main()
{
	lessthanequalto a1,a2;
	if(10<=20)
	{
		cout<<"A2 IS MAX...";
	}
	else
	{
		cout<<"A1 IS MAX...";
	}
	return 0;
}
