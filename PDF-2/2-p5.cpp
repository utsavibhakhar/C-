#include <iostream>
using namespace std;
char generateGrade(int maths, int phy, int chem) 
{
    if (maths > 80 && phy > 75 && chem > 72)
        return 'A';
    else if (60 <= maths && maths <= 80 && 55 <= phy && phy <= 75 && 50 <= chem && chem <= 72)
        return 'B';
    else if (40 <= maths && maths < 60 && 35 <= phy && phy < 55 && 35 <= chem && chem < 50)
        return 'C';
    else
        return 'D'; 
}
int main() 
{
    int N;
    cout << "Enter the number of students: ";
    cin >> N;

    int maths[N], phy[N], chem[N];
    char grades[N];
    cout << "Enter marks for each student (Maths Phy Chem):" << endl;
    for (int i = 0; i < N; ++i) 
	{
        cout << "Student: ";
        cin >> maths[i] >> phy[i] >> chem[i];
        grades[i] = generateGrade(maths[i], phy[i], chem[i]);
    }
    cout << "\nGrades for each student:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "Student " << i + 1 << ": " << grades[i] << endl;
    }
    return 0;
}

