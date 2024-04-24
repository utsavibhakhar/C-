#include<iostream>
using namespace std;
class addadd{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		addadd operator++()
		{
			addadd add;
			
			add.i=++i;
			
			return add;
		}
		void getadd()
		{
			cout<<"addadd of both number:- "<<this->i;
		}
};
int main()
{
	addadd a1,a2;
	int n;
	cout<<"enter n:- ";
	cin>>n;
	
	a1.setdata(n);
	a2=a1;
	
	++a2;
	
	a2.getadd();
	
	return 0;
}
