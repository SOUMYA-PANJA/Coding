#include <iostream>
#include <algorithm>

using namespace std;

/* 
    Given an array where each element is representing the number of chocolates. We have to pick 'm' elements such that the maximum differece is minimum.
 */

int minDiff(int arr[], int size, int m){
    if(m > size){
        return -1;
    }
    sort(arr, arr + size);
    int res = arr[m - 1] - arr[0];
    for (int i = 1; (m - 1 + i) < size; i++)
    {
        res = min(res, arr[m - 1 + i] - arr[i]);
    }
    return res;
}

void createArray(int arr[], int size)
{
    cout << "Enter elements in the array: \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element for index" << i << ":";
        cin >> arr[i];
    }
}

void printArray(int arr[], int size)
{
    cout << "Elements in the array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    createArray(arr, size);
    printArray(arr, size);

    int m;
    cout<<"Enter m: ";
    cin >> m;
    
    int minimum_difference = minDiff(arr, size, m);

    if(minimum_difference >= 0){
        cout<<"The minimum difference present in the array is: "<<minimum_difference;
    }
    else{
        cout<<"Not enough set of chocolates.";
    }

    return 0;
}