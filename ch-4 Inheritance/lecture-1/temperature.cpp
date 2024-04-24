#include<iostream>
using namespace std;
class p{
	public:
		float temperature;
		void setData()
		{	
			cout<<"Enter temperature:";
			cin>>temperature;	
		}
};
class q : public p{
	public:
		float fehrenheit;
		toFehrenheit()
		{	
			fehrenheit=temperature * 9.0 / 5.0 + 32.0;
			cout<<"Fehrenheit is:"<<fehrenheit<<endl;
		}
};
class r : public q{
	public:
		void getData()
		{
			float kelvin;
			kelvin=temperature + 273.15;
			cout<<"kelvin is:"<<kelvin<<endl;
		}
};
int main()
{
	r r1;
	r1.setData();
	r1.toFehrenheit();
	r1.getData();
	return 0;
}
