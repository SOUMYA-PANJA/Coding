#include <iostream>

using namespace std;

int firstOcc(int arr[], int size, int key){
    int low = 0;
    int high = size - 1;
    int mid;
    while(low <= high){
        mid = low + (high - low) / 2;
        if(arr[mid] > key){
            high = mid - 1;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            if(mid == 0 || arr[mid - 1] != arr[mid]){
                return mid;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

int lastOcc(int arr[], int size, int key){
    int low = 0;
    int high = size - 1;
    int mid;
    while(low <= high){
        mid = low + (high - low) / 2;
        if(arr[mid] > key){
            high = mid - 1;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            if(mid == size - 1 || arr[mid + 1] != arr[mid]){
                return mid;
            }
            else{
                low = mid + 1;
            }
        }
    }
    return -1;
}

int countOcc(int arr[], int size, int key){
    int first = firstOcc(arr, size, key);
    if(first < 0){
        return 0;
    }
    else{
        return lastOcc(arr, size, key) - first + 1;
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
    int size, k;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    array(arr, size);
    printArray(arr, size);
    
    int key;
    cout << "Enter key to be searched: ";
    cin >> key;
    
    int count = countOcc(arr, size, key);
    if(count > 0){
        cout<<"Count of "<<key<<" is: "<<count;
    }
    else{
        cout<<key<<" not found.";
    }

    return 0;
}