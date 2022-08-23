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

void oddAppearing(int arr[], int n){
    int XOR = 0, res1 = 0, res2 = 0;
    for (int i = 0; i < n; i++)
    {
        XOR = XOR^arr[i];
    }
    int rSb = XOR & ~(XOR-1);
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & rSb) != 0)
        {
            res1 = res1^arr[i];
        }
        else
        {
            res2 = res2^arr[i];
        }
    }
    cout<<res1<<" "<<res2;
}

int main(){
    int size;
    cout<<"Enter number of elements in the array: ";
    cin>>size;
    int arr[size];
    array(arr, size);
    printArray(arr, size);
    cout<<"Elements having odd number of occurance is: ";
    oddAppearing(arr, size);
}