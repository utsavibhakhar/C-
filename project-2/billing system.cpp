#include<iostream>
#include<string.h>
using namespace std;
class bank{
	int item_number;
	string item_name;
	int quantity;
	int price; 
	int discount;
	
	public:
		void setData()
		{
			cout<<"Enter item number:";
			cin>>this->item_number;
			cout<<"Enter item name:";
			cin>>this->item_name;
			cout<<"Quantity:";
			cin>>this->quantity;
			cout<<"Price:";
			cin>>this->price;
			cout<<"Discount:";
			cin>>this->discount;
		}
		public:
			void getData()
			{
				cout<<"item number:"<<this->item_number<<endl;
				cout<<"item name:"<<this->item_name<<endl;
				cout<<"Quantity:"<<this->quantity<<endl;
				cout<<"Price:"<<this->price<<endl;
				cout<<"Discount:"<<this->discount<<"%"<<endl;
			}
};
int main()
{
	char username[50];
	char password[50];
	char uname[]="admin123";
	char pass[]="12345";
	cout<<"Enter Username:";
	gets(username);
	cout<<"Password:";
	gets(password);
	bank b;
	if(strcmp(username,uname)==0 && strcmp(password,pass)==0)
	{
		b.setData();
		b.getData();
	}
	else
	{
		cout<<"Username & password are invalid...";
	}
	return 0;
}
