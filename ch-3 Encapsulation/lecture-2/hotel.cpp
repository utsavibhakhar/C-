#include<iostream>
using namespace std;
class hotel
{
	private:
	int hotel_id;
	string hotel_name;
	string hotel_type;
	int hotel_rating;
	int hotel_establish_year;
	int hotel_staff_quantity;
	int hotel_room_quantity;
	
	public:
	void setData()	
	{
		cout <<"Enter hotel id:";
		cin >>this->hotel_id;
		cout <<"Enter hotel name:";
		cin >>this->hotel_name;
		cout <<"Enter hotel type:";
		cin >>this->hotel_type;
		cout <<"Enter hotel rate:";
		cin >>this->hotel_rating;
		cout <<"Enter hotel establish year:";
		cin >>this->hotel_establish_year;
		cout <<"Enter hotel staff quantity:";
		cin >>this->hotel_staff_quantity;
		cout <<"Enter hotel room quantity:";
		cin >>this->hotel_room_quantity;	
	}
	static string hotel_location;
	public:
		void getData()
		{
			cout <<"hotel id:"<<this->hotel_id<<endl;
			cout <<"hotel name:"<<this->hotel_name<<endl;
			cout <<"hotel type:"<<this->hotel_type<<endl;
			cout <<"hotel rate:" <<this->hotel_rating<<endl;
			cout <<"hotel establish year:"<<this->hotel_establish_year<<endl;
			cout <<"hotel staff quantity:"<<this->hotel_staff_quantity<<endl;
			cout <<"hotel room quantity:"<<this->hotel_room_quantity<<endl;
		}
		void getStaticData()
		{
			cout <<"hotel location:"<<hotel_location<<endl;
		}
};

string hotel::hotel_location="pune";
int main()
{
	int i,n;
	cout <<"Enter hotel detail:";
	cin>>n;
	hotel h[n];
	for(i=0;i<n;i++)
	{
		h[i].setData();
	}
	for(i=0;i<n;i++)
	{
		h[i].getData();
		h[i].getStaticData();
	}
	return 0;
}
