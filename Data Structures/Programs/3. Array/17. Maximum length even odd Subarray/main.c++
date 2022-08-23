#include <iostream>
#include <math.h>

using namespace std;

int maxOddEven(int arr[], int size)
{
    int res = 1;
    int count = 1;
    for (int i = 1; i < size; i++)
    {
        if(((arr[i] % 2) == 0 && (arr[i - 1] % 2) != 0) || ((arr[i - 1] % 2) == 0 && (arr[i] % 2) != 0)){
            count++;
            res = max(res, count);
        }
        else{
            count = 1;
        }
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
    cout << "Maximum length of alternating odd-even subarray is: " << maxOddEven(arr, size);

    return 0;
}