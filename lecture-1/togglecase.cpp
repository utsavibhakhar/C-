#include<iostream>
using namespace std;
int main()
{
	char tog[100],i;
	cout<<"Enter any number:";
	gets(tog);
	
	for(i=0;tog[i]!='\0';i++)
	{
		if(tog[i]>=65 && tog[i]<=90)
			tog[i]=tog[i]+32;
			
		else if(tog[i]>=97 && tog[i]<=122)
			tog[i]=tog[i]-32;
	}
	cout<<"toggle case:"<<tog;	
	return 0;
}
