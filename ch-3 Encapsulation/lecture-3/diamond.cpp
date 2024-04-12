#include<iostream>
using namespace std;
class diamond
{
	private:
	int comp_id;
	string comp_name;
	int comp_staff_quantity;
	int comp_revenue;
	int comp_import_raw_diamonds; 
	int comp_export_diamonds;
	string comp_ceo;
	
	public:
		diamond(int comp_id,string comp_name,int comp_staff_quantity,int comp_revenue,int comp_import_raw_diamonds,int comp_export_diamonds,string comp_ceo){
			this->comp_id=comp_id;
			this->comp_name=comp_name;
			this->comp_staff_quantity=comp_staff_quantity;
			this->comp_revenue=comp_revenue;
			this->comp_import_raw_diamonds=comp_import_raw_diamonds;
			this->comp_export_diamonds=comp_export_diamonds;
			this->comp_ceo=comp_ceo;
		}
		void getData()
		{
			cout<<"ID:"<<this->comp_id<<endl;
			cout<<"name:"<<this->comp_name<<endl;
			cout<<"staff quantity:"<<this->comp_staff_quantity<<endl;
			cout<<"comp revenue:"<<this->comp_revenue<<endl;
			cout<<"import raw diamonds:"<<this->comp_import_raw_diamonds<<endl;
			cout<<"export diamonds:"<<this->comp_export_diamonds<<endl;
			cout<<"comp ceo:"<<this->comp_ceo<<endl;
		}
};
int main()
{
	diamond d1(1,"utsavi",50,2,5,5,"abc"),d2(2,"krishna",53,1,4,6,"xyz"),d3(3,"Devangi",60,5,8,3,"mno");
	
	d1.getData();
	d2.getData();
	d3.getData();
	
	return 0;
}
