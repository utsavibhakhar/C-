#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Enter size:";
	cin>>n;
	
	int a[n],i;
	for(i=0;i<n;i++)
	{
		cout<<"Enter elements:";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout<<"even number is:\n"<<a[i];
		}
	}
	return 0;
}
