#include <iostream>
#include <math.h>

using namespace std;

/*
    Given an array of non negative integers find if there is any subarray with the given sum
*/

/* 
bool isSubSum(int arr[], int size, int sum)
{
    int curr_sum = arr[0], start = 0;
    for (int end = 1; end <= size; end++)
    {
        while (curr_sum > sum && start < end - 1)
        {
            curr_sum -= arr[start++];
        }
        if (curr_sum == sum)
        {
            return true;
        }
        if(end < size) {
            curr_sum += arr[end];
        }
    }
    return (curr_sum == sum);
}
 */

bool isSubSum(int arr[], int size, int sum){
    int curr_sum = 0, start = 0;
    for (int end = 0; end <= size; end++)
    {
        curr_sum += arr[end];
        while (curr_sum > sum)
        {
            curr_sum -= arr[start++];
        }
        if (curr_sum == sum)
        {
            retunr true;
        }
    }
    return false;
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
    int size, sum;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    array(arr, size);
    printArray(arr, size);
    cout << "Enter sum: ";
    cin >> sum;
    cout<<boolalpha;
    cout << "Is there an array with sum "<<sum<<"? "<<isSubSum(arr, size, sum);

    return 0;
}