#include<iostream>
using namespace std;
class cricket {
public:
    int over;
    void gettotalover() {
        cout << "Cricket over = ";
        cin>>over;
    }
};
class t20 : public cricket {
public:
    int over;
    
    void gettotalover(){
        cout << "T20 cricket over = ";
        cin >> over;
    }
};
class test : public cricket {
public:
    int over;
    
    void gettotalover() {
        cout << "Test cricket over = ";
        cin >> over;
    }
};
int main() 
{
    t20 t2;
    test t1;
    t2.cricket::gettotalover();
    t1.gettotalover(); 
    t2.gettotalover(); 
    
    return 0;
}
