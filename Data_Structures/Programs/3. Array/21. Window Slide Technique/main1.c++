#include <iostream>
#include <math.h>

using namespace std;

/*
    Given an array of integers and a number k, find the maximum sum of k consecutive elements
*/

int kLenSubSum(int arr[], int size, int k)
{
    int res = 0;
    for (int i = 0; i < k; i++)
    {
        res += arr[i];
    }
    int curr_sum = res;
    for (int i = k; i < size; i++)
    {
        curr_sum += (arr[i] - arr[i - k]);
        res = max(res, curr_sum);
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
    int size, k;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    array(arr, size);
    printArray(arr, size);
    cout << "Enter window size: ";
    cin >> k;
    cout << "Maximum sum of "<<k<<" consecutive elemets is:"<<kLenSubSum(arr, size, k);

    return 0;
}