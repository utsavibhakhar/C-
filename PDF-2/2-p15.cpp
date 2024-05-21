#include <iostream>
using namespace std;
int main() 
{
    int Width = 32;
    int Height = 52;
    int margin = 1;
    int totalWidth = Width + 2 * margin;
    int totalHeight = Height + 2 * margin;
    int wallArea = totalWidth * totalHeight;
    cout << "The minimum wall area required to fit the TV with a one-inch margin around it is: " << wallArea << " square inches." << endl;
    return 0;
}

