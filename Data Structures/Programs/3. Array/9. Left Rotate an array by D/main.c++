#include <iostream>

using namespace std;

void lRotate(int arr[], int size, int d){
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < size; i++)
    {
        arr[i - d] = arr[i]; 
    }
    for (int i = 0; i < d; i++)
    {
        arr[size - d + i] = temp[i];
    }
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