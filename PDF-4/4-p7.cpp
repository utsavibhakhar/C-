#include <iostream>
using namespace std;
void addMatrix(int m1[3][3], int m2[3][3], int result[3][3]) 
{
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
}
void displayMatrix(int m[3][3]) 
{
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
int main() 
{
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultMatrix[3][3];

    addMatrix(matrix1, matrix2, resultMatrix);

    cout << "Result Matrix:" << endl;
    displayMatrix(resultMatrix);
    return 0;
}

