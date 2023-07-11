#include <iostream>

using namespace std;

int partition(int arr[], int low, int high) {
    int p = arr[low];
    int i = low - 1, j = high + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < p);
        do
        {
            j--;
        } while (arr[j] > p);
        if(i >= j){
            return j;
        }
        swap(arr[i], arr[j]);
    }
}

void quickSort(int arr[], int low, int high){
    begin:
        if(low < high){
            int p = partition(arr, low, high);
            quickSort(arr, low, p);
            low = p + 1;
            goto begin;
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
    int size, low, mid, high;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    array(arr, size);
    printArray(arr, size);

    cout<<"Before sorting:\n";
    printArray(arr, size);

    quickSort(arr, 0, size - 1);
    
    cout<<"After sorting:\n";
    printArray(arr, size);
    


    return 0;
}