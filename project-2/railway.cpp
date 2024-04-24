#include<iostream>
using namespace std;
class railway
{
	private:
	int train_number;
	string train_name;
	int ticket;
	string destination;
	string time;
	
	public:
		railway(int train_number,string train_name,int ticket,string destination,string time){
			this->train_number=train_number;
			this->train_name=train_name;
			this->ticket=ticket;
			this->destination=destination;
			this->time=time;
			}
		void getData()
		{
			cout<<"no:"<<this->train_number<<endl;
			cout<<"name:"<<this->train_name<<endl;
			cout<<"ticket:"<<this->ticket<<endl;
			cout<<"destination:"<<this->destination<<endl;
			cout<<"time:"<<this->time<<endl;
		}
};
int main()
{
	int n;
	
	railway r1(1,"Express",5,"rajkot","8:00"),r2(2,"Superfast",6,"surat","10:00"),r3(3,"Local",8,"pune","12:00");
	cout<<"Enter Railway Detail:";
	cin>>n;
	switch(n)
	{
		case 1:
			r1.getData();
			break;
		
		case 2:
			r2.getData();
			break;
			
		case 3:
			r3.getData();
			break;
			
		default:
			cout<<"Invaild detail...";
	}
	return 0;
}
