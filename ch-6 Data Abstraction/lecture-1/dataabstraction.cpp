#include<iostream>
using namespace std;
class Admin{
	protected:
		string company_name;
		int manager_salary;
		int employee_salary;
		int total_staff;
		int total_annual_revenue;
		string can_terminate;
};
class Manager:public Admin{
		protected:
		string company_name;
		int manager_salary;
		int employee_salary;
		int total_staff;
		string can_terminate;
		private:
			int total_annual_revenue;
	public:
		void myAccess(){
			cout<<"Enter company name:";
			cin>>this->company_name;
			
			cout<<"Enter manager salary:";
			cin>>this->manager_salary;
			
			cout<<"Enter employee salary:";
			cin>>this->employee_salary;
			
			cout<<"Enter total staff:";
			cin>>this->total_staff;
			
			cout<<"Enter can terminate:";
			cin>>this->can_terminate;
		}
		public:
			void getData()
			{
				cout<<"company name:"<<this->company_name<<endl;
				cout<<"manager salary:"<<this->manager_salary<<endl;
				cout<<"employee salary:"<<this->employee_salary<<endl;
				cout<<"total staff:"<<this->total_staff<<endl;
				cout<<"can terminate:"<<this->can_terminate<<endl;
			}
};
class Employee:public Manager{
		protected:
		string company_name;
		int employee_salary;
		int total_staff;
	
		private:
			int total_annual_revenue;
			int manager_salary;
			string can_terminate;
	public:
		void myAccess(){
			cout<<"Enter company name:";
			cin>>this->company_name;
			
			cout<<"Enter employee salary:";
			cin>>this->employee_salary;
			
			cout<<"Enter total staff:";
			cin>>this->total_staff;
		}
		public:
			void getData()
			{
				cout<<"company name:"<<this->company_name<<endl;
				cout<<"employee salary:"<<this->employee_salary<<endl;
				cout<<"total staff:"<<this->total_staff<<endl;
			}
};
int main()
{
	Manager m;
	Employee e;
	m.myAccess();
	m.getData();
	e.myAccess();
	e.getData();
	return 0;
}
