#include <iostream>

using namespace std;

void getSecondLargest(int arr[], int size){
    int largest = arr[0], res = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > largest){
            res = largest;
            largest = arr[i];
        }
        else if (arr[i] != largest)
        {
            if (res == -1 || arr[i] > res)
            {
                res = arr[i];
            }
            
        }
    }
    cout<<"The largest element in the array is "<<res;
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
    getSecondLargest(arr, size);

    return 0;
}