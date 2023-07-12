#include <iostream>

using namespace std;

// This implementation can only be used for integers
// And considering values ranges from 0 to k - 1.
void countSort(int arr[], int size, int k) {
    int count[k];
    for (int i = 0; i < k; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }
    int idx = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            arr[idx++] = i;
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

    int k;
    cout << "Enter maximum value: ";
    cin >> k;

    cout<<"Before sorting:\n";
    printArray(arr, size);

    countSort(arr, size, k + 1);
    
    cout<<"After sorting:\n";
    printArray(arr, size);
    


    return 0;
}