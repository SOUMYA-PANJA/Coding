#include <iostream>

using namespace std;

/* 
    Inversion: A pair (arr[i], arr[j]) such that arr[i] > arr[j] and i < j
 */

int countAndMerge(int arr[], int low, int mid, int high){
    int size1 = mid - low + 1, size2 = high - mid;
    int res = 0;
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
            res += (size1 - i);
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
    return res;
}

int countInversion(int arr[], int low, int high) {
    int res = 0;
    if(low < high){
        int mid = low + (high - low) / 2;
        res += countInversion(arr, low, mid);
        res += countInversion(arr, mid + 1, high);
        res += countAndMerge(arr, low, mid, high);
    }
    return res;
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
    printArray(arr, size);

    cout<< "Total number of inversions: "<< countInversion(arr, 0, size - 1);

    return 0;
}