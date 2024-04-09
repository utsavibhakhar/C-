#include<iostream>
using namespace std;
class time
{
	public:
	int hour;
	int min;
	int sec;	
};

int main()
{
	time h1,h2,u;
	
	cout<<"Enter hour:";
	cin>>h1.hour;
	cout<<"Enter minute:";
	cin>>h1.min;
	cout<<"Enter second:";
	cin>>h1.sec;
	
	cout<<"Enter hour:";
	cin>>h2.hour;
	cout<<"Enter minute:";
	cin>>h2.min;
	cout<<"Enter second:";
	cin>>h2.sec;
	
	u.hour=h1.hour+h2.hour;
	u.min=h1.min+h2.min;
	u.sec=h1.sec+h2.sec;
	
	cout<<"sum of hour:"<<u.hour<<endl;
	cout<<"sum of minute:"<<u.min<<endl;
	cout<<"sum of second:"<<u.sec<<endl;
	
	if(u.hour<=12)
	{
		u.hour-=12;
	}
	if(u.min>=60)
	{
		u.min-=60;
	}
	if(u.sec>=60)
	{
		u.sec-=60;
	}
	
	cout<<"hour:"<<u.hour<<endl;
	cout<<"minute:"<<u.min<<endl;
	cout<<"second:"<<u.sec<<endl;
	
	return 0;
}
