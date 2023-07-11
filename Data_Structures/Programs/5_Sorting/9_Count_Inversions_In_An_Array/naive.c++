#include <iostream>

using namespace std;

/* 
    Inversion: A pair (arr[i], arr[j]) such that arr[i] > arr[j] and i < j
 */

int countInversion(int arr[], int size) {
    int res = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(arr[i] > arr[j]){
                res++;
            }
        }
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

    cout<< "Total number of inversions: "<< countInversion(arr, size);

    return 0;
}