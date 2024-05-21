#include <iostream>
using namespace std;
int main() 
{
    int treeHeight = 13; 
    int ropeLength = 26; 
    int distance=0;
    
    int distanceToGround = (ropeLength * ropeLength - treeHeight * treeHeight);	//507
	
    for (float i = 1; i * i <= distanceToGround; i += 0.001) 
	{	
        distance = i;
    }
    cout<<"Distance between the tree and the end of the rope on the ground:"<<distance <<"meters";	//507 sqaure root is 22
    return 0;
}

