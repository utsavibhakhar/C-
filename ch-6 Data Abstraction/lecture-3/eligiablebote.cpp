#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter age:";
	cin>>n;
	try{
	if(n<=18)
		throw n;
		cout<<"Eligiable for vote";
	}
	catch(int n){
		cout<<"not Eligiable for vote";	
	}
	return 0;
}
