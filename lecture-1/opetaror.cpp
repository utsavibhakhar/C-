#include<iostream>
using namespace std;
int add(int a,int b)
{
	cout<<"Addtion is:"<<a+b;
}
int sub(int a,int b)
{
	cout<<"substraction is:"<<a-b;
}
int mul(int a,int b)
{
	cout<<"multiplication is:"<<a*b;
}
int div(int a,int b)
{
	cout<<"division is:"<<a/b;
}
int mod(int a,int b)
{
	cout<<"modual is:"<<a%b;
}
int main()
{
	int choice,a,b;
	do{
	cout<<"press +"<<endl;
	cout<<"press -"<<endl;
	cout<<"press *"<<endl;
	cout<<"press /"<<endl;
	cout<<"press %"<<endl;
	cout<<"Enter choice:";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"Enter choice:";
			cin>>a;
			cout<<"Enter choice:";
			cin>>b;
			add(a,b);
			break;
			
		case 2:
			cout<<"Enter choice:";
			cin>>a;
			cout<<"Enter choice:";
			cin>>b;
			sub(a,b);
			break;
			
		case 3:
			cout<<"Enter choice:";
			cin>>a;
			cout<<"Enter choice:";
			cin>>b;
			mul(a,b);
			break;
			
		case 4:
			cout<<"Enter choice:";
			cin>>a;
			cout<<"Enter choice:";
			cin>>b;
			div(a,b);
			break;
			
		case 5:
			cout<<"Enter choice:";
			cin>>a;
			cout<<"Enter choice:";
			cin>>b;
			mod(a,b);
			break;
			
	default:
		cout<<"invalid operator";
		
	}	
	}while(choice!=0);
	
}
