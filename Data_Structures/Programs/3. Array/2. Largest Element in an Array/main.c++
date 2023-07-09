#include <iostream>

using namespace std;

void getLargest(int arr[], int size){
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout<<"The largest element in the array is "<<largest;
}

void array(int arr[], int size){
    cout<<"Enter elements in the array: ";
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element for index"<<i<<":";
        cin>>arr[i];
    }
}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    array(arr, size);
    getLargest(arr, size);

    return 0;
}