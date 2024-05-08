#include<iostream>
using namespace std;
class Marvel{
	public:
		void dispA()
		{
			cout<<"I m Marvel..."<<endl;
		}
};
class DC{
	public:
		void dispB()
		{
			cout<<"I m DC..."<<endl;
		}
};
class Universe:public Marvel,public DC{
	public:
		void dispC()
		{
			cout<<"I m Universe..."<<endl;
		}
};
class MHeroes:public Marvel{
	public:
		void dispD()
		{
			cout<<"I m MHeroes..."<<endl;
		}
};
class DCHeroes:public DC{
	public:
		void dispE()
		{
			cout<<"I m DCHeroes..."<<endl;
		}
};
class Access:public MHeroes,public DCHeroes{
	public:
		void dispF()
		{
			cout<<"I m Access..."<<endl;
		}
};
int main()
{
	DC d;
	Universe u;
	MHeroes m;
	DCHeroes c;
	Access a;
	
	d.dispB();
	u.dispC();
	m.dispD();
	c.dispE();
	a.dispF();
	return 0;
}
