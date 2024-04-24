#include <iostream>
using namespace std;
class Animal 
{
	public:
    	string name;
    	int age;
	public:
   	 void set_value(string name,int age) 
		{
        this->name=name; 
        this->age=age;   
    }
};
class Zebra:public Animal 
{
public:
    void display_info() 
	{
        cout<<"Zebra Name: "<<name<<endl;
        cout<<"Zebra Age: "<<age<<endl;
        cout<<"Zebra place: forest"<<endl;
    }
};
class Dolphin : public Animal 
{
public:
    void display_info() 
	{
        cout<<endl<<"Dolphin Name: "<<name<<endl;
        cout<<"Dolphin Age: "<<age<<endl;
        cout<<"Dolphin place:Ocean"<<endl;
    }
};
int main() 
{
    Zebra z1;
    Dolphin d1;
    
    z1.set_value("black",5);
    d1.set_value("pari",10);
    z1.display_info();
    d1.display_info();
    return 0;
}

