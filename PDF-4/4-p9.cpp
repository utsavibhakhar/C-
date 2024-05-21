#include <iostream>
using namespace std;
int main()
{
    int weights[3][3];
    cout << "Enter the weights of the refugees in a 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) 
	{
        for(int j = 0; j < 3; j++) 
		{
            cin >> weights[i][j];
        }
    }
    int max_weight = weights[0][0], min_weight = weights[0][0];
    for(int i = 0; i < 3; i++) 
	{
        for(int j = 0; j < 3; j++) 
		{
            if(weights[i][j] > max_weight) 
			max_weight = weights[i][j];
			
            if(weights[i][j] < min_weight) 
			min_weight = weights[i][j];
        }
    }
    cout << "The refugee with the highest weight: " << max_weight << " kg"<<endl;
    cout << "The refugee with the lowest weight: " << min_weight << " kg";
    return 0;
}

