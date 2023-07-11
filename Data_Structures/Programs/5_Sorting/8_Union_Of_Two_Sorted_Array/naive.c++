#include <iostream>
#include <algorithm>

using namespace std;

void printUnion(int arr1[], int size1, int arr2[], int size2) {
    int temp[size1 + size2];
    for (int i = 0; i < size1; i++)
    {
        temp[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        temp[size1 + i] = arr2[i];
    }
    sort(temp, temp + size1 + size2);
    for (int i = 0; i < size1 + size2; i++)
    {
        if(i == 0 || temp[i] != temp[i - 1]){
            cout<< temp[i] << " ";
        }
    }
    
}

void inputArray(int arr[], int size)
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
    int size1, size2;
    cout << "Enter size of array1: ";
    cin >> size1;

    int arr1[size1];
    inputArray(arr1, size1);
    printArray(arr1, size1);

    cout << "Enter size of array2: ";
    cin >> size2;

    int arr2[size2];
    inputArray(arr2, size2);
    printArray(arr2, size2);

    cout<<"Union of the arrays are: ";
    printUnion(arr1, size1, arr2, size2);

    return 0;
}