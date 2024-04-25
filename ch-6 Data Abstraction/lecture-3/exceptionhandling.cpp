#include<iostream>
using namespace std;
int main()
{
	int a=6;
	int b=0;
	try{
	if(b==0)
		throw b;
		int sum=a/b;
		cout<<"division is:"<<sum<<endl;
	}
	catch(int n){
		cout<<"can't divisiable zero...";	
	}
	return 0;
}
