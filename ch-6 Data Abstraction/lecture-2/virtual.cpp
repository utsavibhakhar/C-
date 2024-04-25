#include<iostream>
using namespace std;
class cal{
	protected:
		int rad;
		int length;
		int width;
		int height;
		int base;
};
class circle:public cal{
		public:
			void setData1()
			{
				cout<<"Enter radius:";
				cin>>rad;
			}
	public:
		float circleArea; 
		void calculate1()
		{
			circleArea= 3.14* rad* rad; 
			cout<<"circle Area is :"<<circleArea<<endl;
		}
};
class triangle:public cal{
	public:
			void setData2()
			{
				cout<<"Enter base:";
				cin>>base;
				cout<<"Enter height:";
				cin>>height;
			}
		public:
			float triangleArea;
		virtual void calculate2()
		{
			triangleArea=(base * height)/2;
			cout<<"triangle Area is :"<<triangleArea<<endl;	
		}
};
class rectangle:public cal{
			public:
			void setData3()
			{
				cout<<"Enter length:";
				cin>>length;
				cout<<"Enter base:";
				cin>>base;
			}
			public:
			float rectangleArea;
		virtual void calculate3()
		{
			rectangleArea = length * base;
			cout<<"rectangle Area is :"<<rectangleArea<<endl;		
		}
};
int main()
{
	circle c;
	triangle t;	
	rectangle r;
	c.setData1();
	c.calculate1();
	t.setData2();
	t.calculate2();
	r.setData3();
	r.calculate3();
	return 0;
}
