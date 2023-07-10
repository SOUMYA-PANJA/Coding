#include <iostream>

using namespace std;

int countSubsets(int arr[], int n, int sum){
    if (n == 0) {
        return (sum == 0)?1:0;
    }
    return countSubsets(arr, n - 1, sum) + countSubsets(arr, n - 1, sum - arr[n - 1]);
}

void array(int arr[], int size){
    cout<<"Enter elements in the array:\n";
    for (int  i = 0; i < size; i++)
    {
        cout<<"Enter elements for index "<<i<<": ";
        cin>>arr[i];
    }
    
}

int main(){
    int size, sum;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter sum: ";
    cin>>sum;
    
    int arr[size];
    array(arr, size);
    cout<<"Total count of subarray with sum "<<sum<<" ara "<<countSubsets(arr, size, sum);
    
    return 0;
}