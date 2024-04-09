#include<iostream>
using namespace std;
class House{
	public:
	int house_no;
	char house_name[50]; 
	int rooms;
	int floar;
	float area;
	
};
int main()
{
	int n,i;
	cout<<"Enter house:";
	cin>>n;
	House house[n];
	
	for(i=0;i<=n;i++)
	{
		cout<<"house no:-";
		cin>>house[i].house_no;
		
		cout<<"house name:-";
		cin>>house[i].house_name;
		
		cout<<"rooms:-";
		cin>>house[i].rooms;
		
		cout<<"floar:-";
		cin>>house[i].floar;
		
		cout<<"area:-";
		cin>>house[i].area;
		
		cout<<""<<endl;
	}
	
	for(i=0;i<=n;i++)
	{
		cout<<"house no:-"<<house[i].house_no<<endl;
		cout<<"house no:-"<<house[i].house_name<<endl;
		cout<<"rooms:-"<<house[i].rooms<<endl;
		cout<<"floar:-"<<house[i].floar<<endl;
		cout<<"Area:-"<<house[i].area<<endl;
		
		cout<<""<<endl;
		
	}
	return 0;
}
