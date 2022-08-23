#include <iostream>

using namespace std;

void array(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element for index "<<i<<": ";
        cin>>arr[i];
    }
}

void printArray(int arr[], int size){
    cout<<"Elements in the array:";
    for (int i = 0; i < size; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<"\n";
}

int findOdd(int arr[], int n){
    int res = 0;
    for (int  i = 0; i < n; i++)
    {
        res = res^arr[i];
    }
    return res;
    
}

int main(){
    int size;
    cout<<"Enter number of elements in the array: ";
    cin>>size;
    int arr[size];
    array(arr, size);
    printArray(arr, size);
    cout<<"Element haveing odd number of occurance is: "<<findOdd(arr, size);
}