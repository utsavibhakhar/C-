#include<iostream>
using namespace std;
class student{
	private:
	int stu_id;
	string stu_name;
	int stu_age;
	string stu_course;
	string stu_email;
	string stu_city;
	string stu_college;
	
	public:
		void setData()
		{
			cout<<"Enter student id:";
			cin>>stu_id;
			cout<<"Enter student name:";
			cin>>stu_name;
			cout<<"Enter student age:";
			cin>>stu_age;
			cout<<"Enter student course:";
			cin>>stu_course;
			cout<<"Enter student email:";
			cin>>stu_email;
			cout<<"Enter student city:";
			cin>>stu_city;
			cout<<"Enter student college:";
			cin>>stu_college;
		}
		public:
		void getData()
		{
			cout<<"student id: "<<this->stu_id<<endl;
			cout<<"student name: "<<this->stu_name<<endl;
			cout<<"student age: "<<this->stu_age<<endl;
			cout<<"student course: "<<this->stu_course<<endl;
			cout<<"student email: "<<this->stu_email<<endl;
			cout<<"student city: "<<this->stu_city<<endl;
			cout<<"student college: "<<this->stu_college<<endl;
		}
};
int main()
{
	student s1,s2,s3,s4,s5;
	
	s1.setData();
	s2.setData();
	s3.setData();
	s4.setData();
	s5.setData();
	
	s1.getData();
	s2.getData();
	s3.getData();
	s4.getData();
	s5.getData();
	
	return 0;
}
