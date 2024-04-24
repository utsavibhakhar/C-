#include<iostream>
using namespace std;
class x {
	public:
			int a,b,c;
};
class y : public x {
	public:
			void setData()
			{
				cout<<"Enter a:";
				cin>>a;
				cout<<"Enter b:";
				cin>>b;
				cout<<"Enter c:";
				cin>>c;
			}
			void getData()
			{
				int cube;
				cout<<"A:"<<this->a<<endl;	
				cout<<"B:"<<this->b<<endl;
				cout<<"C:"<<this->c<<endl;
				
			cube=(a*a*a)+(b*b*b)+(c*c*c);
			cout<<"cube is:"<<cube<<endl;
			}
};
int main()
{
	y y1;
	y1.setData();
	y1.getData();
	return 0;
}
