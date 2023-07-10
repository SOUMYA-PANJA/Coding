#include <iostream>

using namespace std;

void printFreq(int arr[], int size){
    int freq = 1, i = 1;
    while (i < size)
    {
        while(i < size && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout<<arr[i - 1]<<" -> "<<freq<<" times\n";
        freq = 1;
        i++;
    }
    if(size == 1 || arr[size - 1] != arr[size - 2])
    {
        cout<<arr[i - 1]<<" -> "<<1<<" times\n";
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
    cout<<"Frequencies in the array are:\n";
    printFreq(arr, size);

    return 0;
}