#include <iostream>

using namespace std;

int onesOcc(int arr[], int size){
    int low = 0;
    int high = size - 1;
    int mid;
    while(low <= high){
        mid = low + (high - low) / 2;
        if(arr[mid] == 0){
            low = mid + 1;
        }
        else{
            if(mid == 0 || arr[mid] != arr[mid - 1]){
                return size - mid;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return 0;
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
    
    int count = onesOcc(arr, size);
    cout<<"Count of "<<1<<"'s is: "<<count;
    
    return 0;
}