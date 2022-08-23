#include <iostream>
#include <math.h>

using namespace std;

int maxSum(int arr[], int size)
{
    int res = arr[0];
    int endSum = arr[0];
    for (int i = 1; i < size; i++)
    {
        endSum = max(endSum + arr[i], arr[i]);
        res = max(res, endSum);
    }

    return res;
}

int maxCircularSum(int arr[], int size)
{
    int max_normal = maxSum(arr, size);
    if(max_normal < 0){
        return max_normal;
    }
    int arr_sum = 0;
    for (int i = 0; i < size; i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular = arr_sum + maxSum(arr, size);
    
    return max(max_circular, max_normal);
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
    cout << "Maximum subarray value in a circular array is: " << maxCircularSum(arr, size);

    return 0;
}