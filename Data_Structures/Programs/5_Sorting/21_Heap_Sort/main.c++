#include <iostream>

using namespace std;

void maxHeapify(int arr[], int size, int idx){
    int largest = idx, left = 2 * idx + 1, right = 2 * idx + 2;
    if (left < size && arr[left] > arr[largest])
    {
        largest = left;
    }
    if(right < size && arr[right] > arr[largest])
    {
        largest = right;
    }
    if(largest != idx)
    {
        swap(arr[largest], arr[idx]);
        maxHeapify(arr, size, largest);
    }
}

void buildHeap(int arr[], int size){
    for (int i = (size - 2)/2; i >= 0; i--)
    {
        maxHeapify(arr, size, i);
    }
    
}

void heapSort(int arr[], int size) {
    buildHeap(arr, size);
    for (int i = size - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
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

    heapSort(arr, size);
    
    cout<<"After sorting:\n";
    printArray(arr, size);
    


    return 0;
}