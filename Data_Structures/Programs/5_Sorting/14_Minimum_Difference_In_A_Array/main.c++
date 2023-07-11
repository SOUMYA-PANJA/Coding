#include <iostream>
#include <algorithm>

using namespace std;

int minDiff(int arr[], int size){
    int res = INT_MAX;
    sort(arr, arr + size);
    for (int i = 0; i < size - 1; i++)
    {
        res = min(res, arr[i + 1] - arr[i]);
    }
    return res;
}

void createArray(int arr[], int size)
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
    createArray(arr, size);
    printArray(arr, size);
    
    int minimum_difference = minDiff(arr, size);

    cout<<"The minimum difference present in the array is: "<<minimum_difference;

    return 0;
}