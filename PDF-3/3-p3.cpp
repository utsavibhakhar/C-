#include <iostream>
#include <string>
using namespace std;
class User 
{
private:
    string email;
    string password;
    bool isDeleted;
public:
    User(string _email,string _password){
        this->email=_email;
        this->password=_password;
        this->isDeleted=false;
    }
    void registerUser(string _password) 
	{
        if (_password.length()<8) 
	{
            cout<<"Password must be at least 8 characters long."<<endl;
            return;
        }
        password = _password;
    }
    void loginUser(string _email,string _password) 
	{
        if (email == _email && password == _password && !isDeleted) 
	{
            cout << "User logged in successfully." << endl;
        } 
	else 
	{
            cout << "Invalid email or password." << endl;
        }
    }
    void deleteUser() 
	{
        isDeleted = true;
        cout << "Account deleted successfully." << endl;
    }
};
int main() 
{
    User user("user@example.com", "Password@123");
    user.registerUser("NewPassword@456");
    user.loginUser("user@example.com", "NewPassword@456");
    user.deleteUser();    
    return 0;
}
