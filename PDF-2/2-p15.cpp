#include <iostream>
using namespace std;
int main() 
{
    int tvWidth = 32;
    int tvHeight = 52;
    int margin = 1;
    int totalWidth = tvWidth + 2 * margin;
    int totalHeight = tvHeight + 2 * margin;
    int wallArea = totalWidth * totalHeight;
    cout << "The minimum wall area required to fit the TV with a one-inch margin around it is: " << wallArea << " square inches." << endl;
    return 0;
}

