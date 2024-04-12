#include<iostream>
using namespace std;
class cafe
{
	private:
	int cafe_id;
	string cafe_name;
	string cafe_type;
	int cafe_rating;
	int cafe_establish_year;
	int cafe_staff_quantity;
	
	public:
		cafe(){
			cout<<"Enter id:";
			cin>>this->cafe_id;
			cout<<"Enter name:";
			cin>>this->cafe_name;
			cout<<"Enter cafe type:";
			cin>>this->cafe_type;
			cout<<"Enter cafe rating:";
			cin>>this->cafe_rating;
			cout<<"cafe establish year:";
			cin>>this->cafe_establish_year;
			cout<<"cafe staff quantity:";
			cin>>this->cafe_staff_quantity;
		}
		~cafe()
		{
			static bool des= false;
        	if (!des) {
            	cout << "Thank you... visit again... have a nice day..." << endl;
            	des = true;
        	}
		}
		static string cafe_location;
		public:
		void getData()
		{
			cout<<"ID:"<<this->cafe_id<<endl;
			cout<<"name:"<<this->cafe_name<<endl;
			cout<<"type:"<<this->cafe_type<<endl;
			cout<<"rating:"<<this->cafe_rating<<endl;
			cout<<"establish year:"<<this->cafe_establish_year<<endl;
			cout<<"staff quantity:"<<this->cafe_staff_quantity<<endl;
		}
		static void getSaticData()
		{
			cout<<"cafe location= " <<cafe_location<<endl;
		}
};

string cafe::cafe_location="rajkot";

int main()
{
	int n,i;
	cout<<"Enter cafe details:";
	cin>>n;
	cafe c[n];
	for(i=0;i<n;i++)
	{
		c[i].getData();
		c[i].getSaticData();
	}
	
	return 0;
}
