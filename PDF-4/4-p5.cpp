#include<iostream>
using namespace std;
int main()
{
	int n[] = {2, 7, 15, 10, 23, 8, 14, 17, 6, 9};
	int odd[10], even[10];
    int oddCount = 0, evenCount = 0;
    for (int i = 0; i < 10; i++) 
	{
        if (n[i] % 2 == 0) 
		{
            even[evenCount++] = n[i];
        } 
		else 
		{
            odd[oddCount++] = n[i];
        }
    }
    cout << "Odd Numbers:" << endl;
    for (int i = 0; i < oddCount; i++) 
	{
        cout << odd[i] << " ";
    }
    cout <<endl<<"Even Numbers:" << endl;
    for (int i = 0; i < evenCount; i++) 
	{
        cout << even[i] << " ";
    }
	return 0;
}
