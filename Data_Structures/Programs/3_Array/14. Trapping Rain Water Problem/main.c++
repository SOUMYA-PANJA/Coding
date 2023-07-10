#include <iostream>
#include <math.h>

using namespace std;

int getWater(int arr[], int size)
{
    int res = 0;
    int lMax[size], rMax[size];
    lMax[0] = arr[0];
    rMax[size - 1] = arr[size - 1];
    for (int i = 1; i < size; i++)
    {
        lMax[i] = max(arr[i], lMax[i - 1]);
    }
    for (int i = size - 2; i >= 0; i--)
    {
        rMax[i] = max(arr[i], rMax[i + 1]);
    }
    for (int i = 1; i < size - 1; i++)
    {
        res += (min(rMax[i], lMax[i]) - arr[i]);
    }
    
    return res;
}

void array(int arr[], int size)
{
    cout << "Enter elements in the array: \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element for index" << i << ":";
        cin >> arr[i];
    }
}

void printArray(int arr[], int size)
{
    cout << "Elements in the array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    array(arr, size);
    printArray(arr, size);
    cout << "Maximum water can trap is: " << getWater(arr, size);

    return 0;
}