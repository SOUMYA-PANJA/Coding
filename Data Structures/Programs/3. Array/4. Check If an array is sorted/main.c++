#include <iostream>

using namespace std;

bool isSorted(int arr[], int size){
    for (int i = 1; i < size - 1; i++)
    {
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}

void array(int arr[], int size){
    cout<<"Enter elements in the array: \n";
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
    cout<<"Is the array sorted? "<<(isSorted(arr, size)?"Yes":"No");

    return 0;
}