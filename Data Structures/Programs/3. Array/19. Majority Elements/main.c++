#include <iostream>
#include <math.h>

using namespace std;

int findMajority(int arr[], int size)
{
    int res = 0;
    int count = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[res])
        {
            count++;
        }
        else{
            count--;
        }
        if(count == 0){
            res = i;
            count = 1;
        }
    }

    count = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == arr[res]){
            count++;
        }
    }
    
    if (count <= size/2)
    {
        res = - 1;
    }
    
    return res;
}

void array(int arr[], int size)
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
    array(arr, size);
    printArray(arr, size);
    cout << "Majority element in the array is: " << findMajority(arr, size);

    return 0;
}