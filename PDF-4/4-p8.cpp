#include<iostream>
using namespace std;
int main()
{
	 int m, n;
     cout<<"Enter number of rows:";
     cin>>m;
	 cout<<"Enter number of column:";
     cin>>n;
	int arr[m][n],trans[m][n];
	int i, j;
	
     for(i=0; i<m; i++)
     {
              for(j=0; j<n; j++)
              {
					cout<<"Enter array elements:"<<endl;
                    cin>>arr[i][j];
              }
     }
     for(i=0; i<m; i++)
     {
              for(j=0; j<n; j++)
              {
                       trans[j][i] = arr[i][j];
              }
     }
     
	cout<<"array trasporting:"<<endl;
	
     for(i=0; i<n; i++)
     {
              for(j=0; j<m; j++)
              {
                       cout<<trans[i][j];
              }
              cout<<endl;
     }
     return 0;
}

