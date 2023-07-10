#include <iostream>

using namespace std;

void moveZeroes(int arr[], int size){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] != 0){
            swap(arr[i], arr[count]);
            count++;
        }
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
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    array(arr, size);
    printArray(arr, size);
    moveZeroes(arr, size);
    cout<<"Now the array is:\n";
    printArray(arr, size);

    return 0;
}