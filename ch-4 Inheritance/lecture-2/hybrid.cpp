#include<iostream>
using namespace std;

class A{
public:
    int a;
    void dispa() {
        cout<<"Enter the number in A: ";
        cin>>a;   
    }   
};

class B : public A{
public:
    int b;
    void dispb() {
        cout<<"Enter the number in B: ";
        cin>>b;   
    }   
};

class C: public A{
public:
    int c;
    void dispc() {
        cout<<"Enter the number in C: ";
        cin>>c;   
    }   
};

class D : public B, public C{
public:
    int d;
    void dispd() {
        cout<<"Enter the number in D: ";
        cin>>d;   
    }   
};

int main()
{
    D d1;
    int sum=0;
    
    d1.B::dispa();
    d1.dispb();
    d1.dispc();
    d1.dispd();
    
    sum = d1.B::a + d1.b + d1.c + d1.d;
    cout<<"Sum = "<<sum<<endl;
    
    return 0;
}

