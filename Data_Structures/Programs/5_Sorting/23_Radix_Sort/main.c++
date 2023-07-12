#include <iostream>

using namespace std;

void countSort(int arr[], int size, int exp) {
    int count[10], output[size];
    for (int i = 0; i < 10; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        count[(arr[i]/exp) % 10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    for (int i = size - 1; i >= 0; i--) // To maintain stability we traverse from right to left
    {
        output[count[(arr[i]/exp) % 10] - 1] = arr[i];
        count[(arr[i]/exp) % 10]--;
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int size){
    int mx = arr[0];
    for (int i = 1; i < size; i++)
    {
        if(arr[i] > mx){
            mx = arr[i];
        }
    }
    for (int exp = 1; mx/exp > 0; exp *= 10)
    {
        countSort(arr, size, exp);
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

    radixSort(arr, size);
    
    cout<<"After sorting:\n";
    printArray(arr, size);

    return 0;
}