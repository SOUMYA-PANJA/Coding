#include <iostream>

using namespace std;

int getAPeak(int arr[], int size){
    int low = 0;
    int high = size - 1;
    int mid;
    while(low <= high){
        mid = low + (high - low) / 2;
        if((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid = size - 1 || arr[mid + 1] >= arr[mid])){
            return mid;
        }
        else if(mid > 0 || arr[mid - 1] >= arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
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
    
    int pos = getAPeak(arr, size);
    cout<<"Index of peak element is "<<pos<<" and the element is "<<arr[pos];

    return 0;
}