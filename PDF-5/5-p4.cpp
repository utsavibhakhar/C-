#include <iostream>
using namespace std;
void calculateCubes(int arr[], int cubes[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cubes[i] = arr[i] * arr[i] * arr[i];
    }
}
float calculateAverage(int arr[], int size) 
{
    float sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum / size;
}
string decideArrayKind(float average) 
{
    if (average >= 22 && average <= 35) {
        return "HIGH";
    } else if (average > 35 && average <= 50) {
        return "BALANCED";
    } else if (average > 50) {
        return "TOXIC";
    } else {
        return "LOOSE";
    }
}
int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size=5;
    int cubes[5];
    calculateCubes(arr, cubes, size);
    float average = calculateAverage(cubes, size);
    string arrayKind = decideArrayKind(average);
    
    cout << "Cubes of array elements: ";
    for (int i = 0; i < 5; i++) 
    {
        cout << cubes[i] << " ";
    }
    cout << endl;
    cout << "Average value of the new array: " << average << endl;
    cout << "Kind of the array: " << arrayKind << endl;
    return 0;
}

