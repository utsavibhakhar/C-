#include<iostream>
using namespace std;
class Message
{
	private:
	string value;
	public:
		Message(string n)
		{
			this->value=n;
		}
		void print()
		{
			cout<<this->value<<endl;
		}
		void print(string message)
		{
			cout<<this->value<<endl
			cout<<this->message<<endl;
		}
	};
int main()
{
	Message message("hello world");
	message.print("additional message");
	return 0;
}
