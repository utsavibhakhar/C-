#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter number:";
	cin>>n;
	
	int i,sum=0;
	while(n!=0)
	{
		sum=sum+(n%10);
		n=n/10;
	}
	cout<<"Sum of all digits:"<<sum;
	return 0;
}
