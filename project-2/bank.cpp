#include<iostream>
using namespace std;
class bank
{
	private:
	int bank_no;
	string bank_name;
	string card;
	int loan;
	
	public:
	void setData()	
	{
		cout <<"Enter bank no:";
		cin >>this->bank_no;
		cout <<"Enter bank name:";
		cin >>this->bank_name;
		cout <<"Enter card:";
		cin >>this->card;
		cout <<"Enter loan:";
		cin >>this->loan;
	}
	static string bank_location;
	public:
		void getData()
		{
			cout <<"bank id:"<<this->bank_no<<endl;
			cout <<"bank name:"<<this->bank_name<<endl;
			cout <<"bank card:"<<this->card<<endl;
			cout <<"bank loan:" <<this->loan<<endl;
		}
		void getStaticData()
		{
			cout <<"bank location:"<<bank_location<<endl;
		}
};

string bank::bank_location="rajkot";
int main()
{
	int i,n;
	cout <<"Enter bank detail:";
	cin>>n;
	bank b[n];
	for(i=0;i<n;i++)
	{
		b[i].setData();
	}
	for(i=0;i<n;i++)
	{
		b[i].getData();
		b[i].getStaticData();
	}
	return 0;
}
