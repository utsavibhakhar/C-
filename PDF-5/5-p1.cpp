#include<iostream>
using namespace std;
void add(int a,int b)
{
	cout<<"Addition is:"<<a+b;
}
void sub(int a,int b)
{
	cout<<"Subtraction is:"<<a-b;
}
void mul(int a,int b)
{
	cout<<"Multiplication is:"<<a*b;
}
void div(int a,int b)
{
	cout<<"Division is:"<<a/b;
}
void mod(int a,int b)
{
	cout<<"Modual is:"<<a%b;
}
int main()
{
	int n,a,b;
	do{
		cout<<"press +";
		cout<<"press -";
		cout<<"press *";
		cout<<"press /";
		cout<<"press %";
		cout<<"Enter number:";
		cin>>n;
		
		switch(n)
		{
			case 1:
				cout<<"Enter number:";
				cin>>a;
				cout<<"Enter number:";
				cin>>b;
				add(a,b);
				break;
				
			case 2:
				cout<<"Enter number:";
				cin>>a;
				cout<<"Enter number:";
				cin>>b;
				sub(a,b);
				break;
				
			case 3:
				cout<<"Enter number:";
				cin>>a;
				cout<<"Enter number:";
				cin>>b;
				mul(a,b);
				break;
				
			case 4:
				cout<<"Enter number:";
				cin>>a;
				cout<<"Enter number:";
				cin>>b;
				div(a,b);
				break;
				
			case 5:
				cout<<"Enter number:";
				cin>>a;
				cout<<"Enter number:";
				cin>>b;
				mod(a,b);
				break;
				
			default:
				cout<<"Invalid data...";
		}
	}while(n!=0);
	return 0;
}

