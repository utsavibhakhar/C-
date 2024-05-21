#include<iostream>
using namespace std;
int main()
{
	int totalSecond;
	int hour,min,sec;
	
	cout << "Enter a total second :- ";
	cin >> totalSecond;
	
	hour = totalSecond/3600;
	min = (totalSecond%3600)/60;	
	sec = (totalSecond%3600)%60;
	
	cout << hour << " : " << min << " : " << sec;
	
	return 0;
}
