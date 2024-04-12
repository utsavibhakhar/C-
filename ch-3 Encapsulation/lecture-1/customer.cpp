#include<iostream>
using namespace std;
class student{
	private:
	int cust_id;
	string cust_name;
	int cust_age;
	string cust_telecome_brand_name;
	int cust_mobile_number;
	string cust_city;
	int cust_simcard_validity;
	
	public:
		void setData(int cust_id,string cust_name,int cust_age,string cust_telecome_brand_name,int cust_mobile_number,string cust_city,int cust_simcard_validity)
		{
			this->cust_id=cust_id;
			this->cust_name=cust_name;
			this->cust_age=cust_age;
			this->cust_telecome_brand_name=cust_telecome_brand_name;
			this->cust_mobile_number=cust_mobile_number;
			this->cust_city=cust_city;
			this->cust_simcard_validity=cust_simcard_validity;
		}
		public:
		void getData()
		{
			cout<<"customer id: "<<this->cust_id<<endl;
			cout<<"customer name: "<<this->cust_name<<endl;
			cout<<"customer age: "<<this->cust_age<<endl;
			cout<<"customer telecome brand name: "<<this->cust_mobile_number<<endl;
			cout<<"student customer mobile number: "<<this->cust_mobile_number<<endl;
			cout<<"customer city: "<<this->cust_city<<endl;
			cout<<"customer simcard validity: "<<this->cust_simcard_validity<<endl;
		}
};
int main()
{
	student s1,s2,s3,s4,s5;
	
	s1.setData(1,"utsavi",19,"jio",987456,"rajkot",1);
	s2.setData(2,"krishna",20,"airtel",756331,"pune",2);
	s3.setData(3,"dewandi",19,"jio",12345,"surat",3);
	s4.setData(4,"hetvi",19,"airtel",45632,"mumbai",4);
	s5.setData(5,"chhaya",19,"jio",14523,"panjab",5);
	
	s1.getData();
	s2.getData();
	s3.getData();
	s4.getData();
	s5.getData();
	
	return 0;
}
