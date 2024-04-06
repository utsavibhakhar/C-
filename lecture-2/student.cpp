#include<iostream>
using namespace std;
class student
{
	public:
	int emp_id;
	char emp_name[20];
	char emp_role[20];
	int emp_age;
	int emp_salary;
	int emp_experience;
	char emp_city[20];
	char emp_company_name[20];
};
int main()
{
	student abc[5];
	int i;
	for(i=0;i<=5;i++)
	{
		cout<<"Enter Employee id:"<<endl;
		cin>>abc[i].emp_id;
		cout<<"Enter Employee name:"<<endl;
		cin>>abc[i].emp_name;
		cout<<"Enter Employee role:"<<endl;
		cin>>abc[i].emp_role;
		cout<<"Enter Employee age:"<<endl;
		cin>>abc[i].emp_age;
		cout<<"Enter Employee salary:"<<endl;
		cin>>abc[i].emp_salary;
		cout<<"Enter Employee experience:"<<endl;
		cin>>abc[i].emp_experience;
		cout<<"Enter Employee city:"<<endl;
		cin>>abc[i].emp_city;
		cout<<"Enter Employee company name:"<<endl;
		cin>>abc[i].emp_company_name;
	}
	for(i=0;i<=5;i++)
	{
		cout<<"Employee id:"<<abc[i].emp_id<<endl;
		cout<<"Employee name:"<<abc[i].emp_name<<endl;
		cout<<"Employee role:"<<abc[i].emp_role<<endl;
		cout<<"Employee age:"<<abc[i].emp_age<<endl;
		cout<<"Employee salary:"<<abc[i].emp_salary<<endl;
		cout<<"Employee experience:"<<abc[i].emp_experience<<endl;
		cout<<"Employee city:"<<abc[i].emp_city<<endl;
		cout<<"Employee company name:"<<abc[i].emp_company_name<<endl;
	}
}
