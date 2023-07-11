#include <iostream>

using namespace std;

void merge(int arr1[], int size1, int arr2[], int size2) {
    int i = 0, j = 0;
    while (i < size1 && j < size2)
    {
        if(arr1[i] <= arr2[j]){
            cout<<arr1[i++]<<" ";
        }
        else{
            cout<<arr2[j++]<<" ";
        }
    }
    while (i < size1)
    {
        cout<<arr1[i++]<<" ";
    }
    while (j < size2)
    {
        cout<<arr2[j++]<<" ";
    }
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
    int size1, size2;
    cout << "Enter size of array1: ";
    cin >> size1;

    int arr1[size1];
    array(arr1, size1);
    printArray(arr1, size1);

    cout << "Enter size of array2: ";
    cin >> size2;

    int arr2[size2];
    array(arr2, size2);
    printArray(arr2, size2);

    merge(arr1, size1, arr2, size2);

    return 0;
}