#include <iostream>

using namespace std;

//All elements to the left of p is smaller or equal to and right have greater.
void partition(int arr[], int low, int high, int p) {
    int temp[high - low + 1], idx = 0;
    for (int i = low; i <= high; i++)
    {
        if(arr[i] <= arr[p]){
            temp[idx++] = arr[i];
        }
    }
    for (int i = low; i <= high; i++)
    {
        if(arr[i] > arr[p]){
            temp[idx++] = arr[i];
        }
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
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

    cout<<"Before partitioning:\n";
    printArray(arr, size);

    partition(arr, 0, size - 1, size - 1);
    
    cout<<"After partitioning:\n";
    printArray(arr, size);
    


    return 0;
}