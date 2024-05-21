#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    int maths, phy, chem;
    char grade;

    for (int i = 1; i <= n; i++) {
        cout << "Enter marks for student " << i << " (Maths Physics Chemistry): ";
        cin >> maths >> phy >> chem;
        
        if (maths > 80 && phy > 75 && chem > 72)
            grade = 'A';
        else if (60 <= maths && maths <= 80 && 55 <= phy && phy <= 75 && 50 <= chem && chem <= 72)
            grade = 'B';
        else if (40 <= maths && maths < 60 && 35 <= phy && phy < 55 && 35 <= chem && chem < 50)
            grade = 'C';
        else
            grade = 'D';
        
        cout << "Grade for student " << i << ": " << grade << endl;
    }
    return 0;
}
