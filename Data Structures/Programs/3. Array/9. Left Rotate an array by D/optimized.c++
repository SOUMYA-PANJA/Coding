#include <iostream>

using namespace std;

void reverse(int arr[], int low, int high){
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void lRotate(int arr[], int size, int d){
    reverse(arr, 0, d - 1);
    reverse(arr, d, size - 1);
    reverse(arr, 0, size - 1);
}

void array(int arr[], int size){
    cout<<"Enter elements in the array: \n";
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element for index"<<i<<":";
        cin>>arr[i];
    }
}

void printArray(int arr[], int size){
    cout<<"Elements in the array: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int size, d;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    array(arr, size);
    printArray(arr, size);

    cout<<"Enter d: ";
    cin>>d;

    lRotate(arr, size, d);
    cout<<"Now the array is: \n";
    printArray(arr, size);

    return 0;
}