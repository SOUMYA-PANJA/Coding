#include <iostream>

using namespace std;

/* 
    Given an array of size n and three indexes low <= mid < high < n.
    Numbers from low to mid and mid + 1 to high are sorted.
    We have to sort the elements from low to high.
 */

void merge(int arr[], int low, int mid, int high) {
    int size1 = mid - low + 1, size2 = high - mid;
    int left[size1], right[size2];
    for (int i = 0; i < size1; i++)
    {
        left[i] = arr[low + i];
    }
    for (int i = 0; i < size2; i++)
    {
        right[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = low;
    while (i < size1 && j < size2)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else{
            arr[k++] = right[j++];
        }
    }
    while (i < size1)
    {
        arr[k++] = left[i++];
    }
    while (j < size2)
    {
        arr[k++] = right[j++];
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

    cout << "Enter low value: ";
    cin >> low;
    cout << "Enter mid value: ";
    cin >> mid;
    cout << "Enter high value: ";
    cin >> high;

    cout<<"Before sorting:\n";
    printArray(arr, size);

    merge(arr, low, mid, high);
    
    cout<<"After sorting:\n";
    printArray(arr, size);
    


    return 0;
}