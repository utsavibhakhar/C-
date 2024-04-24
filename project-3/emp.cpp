#include<iostream>
using namespace std;
class A
{
    public:
        int id;
        string name;
        int age;
        string comp_name;
        int experience;
        emp1() 
        {
            cout<<"enter employee id:";
            cin>>id;
            cout<<"enter employee name:";
            cin>>name;
            cout<<"enter employee age:";
            cin>>age;
            cout<<"enter employee company name:";
            cin>>comp_name;
            cout<<"enter employee experience:";
            cin>>experience;
        } 
        detail1() 
		{
            cout << "\nEmployee Information:" << endl;
            cout << "Employee ID: " << id << endl;
            cout << "Employee Name: " << name << endl;
            cout << "Employee Age: " << age << endl;
            cout << "Company Name: " << comp_name << endl;
            cout << "Experience years:-" <<experience<< endl;
        }
};
class B
{
    public:
        int id;
        string name;
        int age;
        string comp_name;
        int experience;
        
        emp2() 
        {
            cout<<endl<<"enter employee id:";
            cin>>id;
            cout<<"enter employee name:";
            cin>>name;
            cout<<"enter employee age:";
            cin>>age;
            cout<<"enter employee company name:";
            cin>>comp_name;
            cout<<"enter employee experience(in year):";
            cin>>experience;
        }
        detail2() 
		{
            cout << "\nEmployee Information:" << endl;
            cout << "Employee ID: " << id << endl;
            cout << "Employee Name: " << name << endl;
            cout << "Employee Age: " << age << endl;
            cout << "Company Name: " << comp_name << endl;
            cout << "Experience years:-" <<experience<< endl;
        }   
};

class C:public A,public B
{
    public:
        int id;
        string name;
        int age;
        string comp_name;
        int experience;
        
        emp3() 
        {
            cout<<endl<<"enter employee id:";
            cin>>id;
            cout<<"enter employee name:";
            cin>>name;
            cout<<"enter employee age:";
            cin>>age;
            cout<<"enter employee company name:";
            cin>>comp_name;
            cout<<"enter employee experience";
            cin>>experience;
        }  
        detail3() 
		{
            cout << "\nEmployee Information:" << endl;
            cout << "Employee ID: " << id << endl;
            cout << "Employee Name: " << name << endl;
            cout << "Employee Age: " << age << endl;
            cout << "Company Name: " << comp_name << endl;
            cout << "Experience years:-" <<experience<< endl;
        }   
};

int main()
{
    C c1;
    c1.emp1();
    c1.emp2();
    c1.emp3();
    
    c1.detail1();
    c1.detail2();
    c1.detail3();
    return 0;
}

