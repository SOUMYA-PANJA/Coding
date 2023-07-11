#include <iostream>

using namespace std;

// Dutch national flag algorithm
// Given an array of 0's, 1's and 2's

void sort(int arr[], int low, int high) {
    int mid = low;
    while (mid <= high)
    {
        if(arr[mid] == 0){
            swap(arr[low++], arr[mid++]);
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high--]);
        }
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
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    array(arr, size);

    cout<<"Before sorting:\n";
    printArray(arr, size);

    sort(arr, 0, size - 1);
    
    cout<<"After sorting:\n";
    printArray(arr, size);
    


    return 0;
}