#include<iostream>
using namespace std;
class animal{
	public:
		string name;
		int age;
		setData()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter age:";
			cin>>age;
		}
		getData()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
		}
};
class zebra{
	public:
		string name;
		int age;
		string  placeoforigin;
		setData()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter age:";
			cin>>age;
			cout<<" place of origin:";
			cin>>placeoforigin;
		}
		getData()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
			cout<<"placeoforigin:"<<placeoforigin<<endl;
		}
};
class dolphine{
	public:
		string name;
		int age;
		string  placeoforigin;
		setData()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter age:";
			cin>>age;
			cout<<" place of origin:";
			cin>>placeoforigin;
		}
		getData()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
			cout<<"placeoforigin:"<<placeoforigin<<endl;
		}
};

int main()
{
	dolphine d1;
	zebra z1;
	
	d1.setData();
	z1.setData();
	d1.getData();
	z1.getData();
	return 0;
}
