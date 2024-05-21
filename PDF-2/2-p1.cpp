#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"enter number:";
	cin>>n1;
	cout<<"Enter number:";
	cin>>n2;
	
	int i;
	for(i=1;i<=10;i++)
	{
		cout<<n1<<"*"<<i<<"="<<n1*i<<endl;
	}
	int j;
	for(j=1;j<=10;j++)
	{
		cout<<n2<<"*"<<j<<"="<<n2*j<<endl;
	}
	return 0;
}
