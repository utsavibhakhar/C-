#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string n;
	cout<<"Enter string:";
	cin>>n;
	int i;
	try{
	if(n[i]>=65 && n[i]<=90)
		throw n[i]+=32;
		cout<<"valid password";
	}
	catch(...){
		cout<<"invalid password";	
	}
	return 0;
}
