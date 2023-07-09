#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key){
    int low = 0;
    int high = size - 1;
    int mid;
    while(low <= high){
        mid = low + (high - low) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
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
    int size, k;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    array(arr, size);
    printArray(arr, size);
    
    int key;
    cout << "Enter key to be searched: ";
    cin >> key;
    
    int pos = binarySearch(arr, size, key);
    if(pos >= 0){
        cout<<key<<" is found at index: "<<pos;
    }
    else{
        cout<<key<<" not found.";
    }

    return 0;
}