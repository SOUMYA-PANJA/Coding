#include <iostream>

using namespace std;

int partition(int arr[], int low, int high) {
    int p = arr[high]; // Assuming last element is pivot. If the pivot is given then swap is with the last element.
    // All elements to the left of p is smaller and right have equal to or greater than.
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if(arr[j] < p){
            swap(arr[++i], arr[j]);
        }
    }
    swap(arr[++i], arr[high]);
    return i;
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

    cout<<"Before partitioning:\n";
    printArray(arr, size);

    int p = partition(arr, 0, size - 1);
    
    cout<<"After partitioning:\n";
    printArray(arr, size);
    cout<<"Partitioning index "<< p << " and vlaue "<< arr[p];
    


    return 0;
}