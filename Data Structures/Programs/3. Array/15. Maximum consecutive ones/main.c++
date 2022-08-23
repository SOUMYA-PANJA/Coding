#include <iostream>
#include <math.h>

using namespace std;

int maxConsecutiveOnes(int arr[], int size)
{
    int res = 0;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == 1){
            count++;
            res = max(res, count);
        }
        else{
            count = 0;
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
    cout << "Maximum consecutive ones are: " << maxConsecutiveOnes(arr, size);

    return 0;
}