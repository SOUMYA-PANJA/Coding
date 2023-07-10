#include <iostream>

using namespace std;

// Prints Leaders in reverse order
// All the elements on the right of the element are smaller.

void leaders(int arr[], int size){
    int curr_lead = arr[size - 1];
    cout<<curr_lead<<" ";
    for (int i = size - 2; i >= 0; i--)
    {
        if (arr[i] > curr_lead)
        {
            curr_lead = arr[i];
            cout<<curr_lead<<" ";
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
    cout<<"Leaders in the arraya are: ";
    leaders(arr, size);

    return 0;
}