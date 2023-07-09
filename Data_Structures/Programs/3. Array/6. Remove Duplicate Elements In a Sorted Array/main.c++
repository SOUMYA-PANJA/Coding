#include <iostream>

using namespace std;

int remDup(int arr[], int size){
    int res = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[res - 1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }

    return res;
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
    size = remDup(arr, size);
    cout<<"Now the array is: \n";
    printArray(arr, size);

    return 0;
}