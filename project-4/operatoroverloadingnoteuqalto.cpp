#include<iostream>
using namespace std;
class notequalto{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		notequalto operator!=(notequalto n)
		{
			notequalto equalto;
			
			equalto.i=this->i!=n.i;
			
			return equalto;
		}
		void getequalto()
		{
			cout<<"equalto of both number:- "<<this->i;
		}
};
int main()
{
	notequalto a1,a2;
	if(10!=20)
	{
		cout<<"A1 & A2 are not equal...";
	}
	else
	{
		cout<<"A1 & A2 are equal...";
	}
	return 0;
}
