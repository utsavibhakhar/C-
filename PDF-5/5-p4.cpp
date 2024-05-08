#include <iostream>
using namespace std;
void calculateCubes(int arr[], int cubes[], int size) 
{
    for (int i = 0; i < size; i++) 
	{
        cubes[i] = arr[i] * arr[i] * arr[i];
    }
}
float calculateAverage(const int arr[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; ++i) 
	{
        sum += arr[i];
    }
    return (sum) / size;
}
string determineArrayKind(float average) 
{
    if (average >= 22 && average <= 35) 
	{
        return "HIGH";
    } 
	else if (average > 35 && average <= 50) 
	{
        return "BALANCED";
    } 
	else if (average > 50) 
	{
        return "TOXIC";
    } 
	else 
	{
        return "LOOSE";
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = 0;
    while (array[size] != '\0') 
	{
        ++size;
    }
    int cubes[size];
    calculateCubes(array, cubes, size);
    
    float average = calculateAverage(cubes, size);
    string kind = determineArrayKind(average);

    cout << "Cubes of elements: ";
    for (int i = 0; i < size; ++i) 
	{
        cout << cubes[i] << " ";
    }
    cout << endl;
    cout << "Average value: " << average << endl;
    cout << "Array kind: " << kind << endl;
    return 0;
}

