#include <iostream>
#include <math.h>

using namespace std;

int maxProfit(int arr[], int size)
{
    int profit = 0;
    for (int i = 1; i < size; i++)
    {
        if(arr[i] > arr[i - 1]){
            profit += (arr[i] - arr[i - 1]);
        }
    }
    return profit;
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
    cout << "Maximum Profit is: " << maxProfit(arr, size);

    return 0;
}