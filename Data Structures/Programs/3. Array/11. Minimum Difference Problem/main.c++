#include <iostream>

using namespace std;

int min(int a, int b){
    return a < b?a:b;
}
int max(int a, int b){
    return a > b?a:b;
}

int maxDiff(int arr[], int size){
    int res = arr[1] - arr[0], minVal = arr[0];
    for (int j = 1; j < size; j++)
    {
        res = max(res, arr[j] - minVal);
        minVal = min(minVal, arr[j]);
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
    cout<<"Maximum value of arr[j] - arr[i] when j > i is: "<<maxDiff(arr, size);

    return 0;
}