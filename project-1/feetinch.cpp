#include<iostream>
using namespace std;
class dis
{
	public:
	int feet;
	int inch;	
};
int main()
{
	dis d1,d2,d3;
	
	cout<<"Enter Feet1:";
	cin>>d1.feet;
	cout<<"Enter Inch1:";
	cin>>d1.inch;
	
	cout<<"Enter Feet2:";
	cin>>d2.feet;
	cout<<"Enter Inch2:";
	cin>>d2.inch;
	
	d3.feet=d1.feet+d2.feet;
	d3.inch=d1.inch+d2.inch;
	
	cout<<"sum of feet:"<<d3.feet<<endl;
	cout<<"sum of inch:"<<d3.inch<<endl;
	
	while(d3.inch>=12.0)
	{
		d3.inch-=12;
		d3.feet++;
	}
	cout<<"feet:"<<d3.feet<<endl;
	cout<<"inch:"<<d3.inch<<endl;
	
	return 0;
}
