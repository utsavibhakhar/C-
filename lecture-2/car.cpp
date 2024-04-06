#include<iostream>
using namespace std;
class car
{
	public:
	int car_id;
	char car_company_name[20];
	char car_color[20];
	char car_model[20];
	int car_release_year;
};
int main()
{
	car abc[4];
	int i;
	for(i=0;i<=4;i++)
	{
		cout<<"Enter car id:"<<endl;
		cin>>abc[i].car_id;
		cout<<"Enter car company name:"<<endl;
		cin>>abc[i].car_company_name;
		cout<<"Enter car color:"<<endl;
		cin>>abc[i].car_color;
		cout<<"Enter car model:"<<endl;
		cin>>abc[i].car_model;
		cout<<"Enter car release year:"<<endl;
		cin>>abc[i].car_release_year;
		
	}
	for(i=0;i<=4;i++)
	{
		cout<<"car id:"<<abc[i].car_id<<endl;
		cout<<"car company name:"<<abc[i].car_company_name<<endl;
		cout<<"car color:"<<abc[i].car_color<<endl;
		cout<<"car model:"<<abc[i].car_model<<endl;
		cout<<"car release year:"<<abc[i].car_release_year<<endl;
		
	}
}
