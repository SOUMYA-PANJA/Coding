#include <iostream>

using namespace std;

bool isPair(int arr[], int size, int sum)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        if(arr[left] + arr[right] == sum){
            return true;
        }
        else if(arr[left] + arr[right] > sum){
            right--;
        }
        else{
            left++;
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
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    array(arr, size);
    printArray(arr, size);

    int sum;
    cout << "Enter sum to be searched: ";
    cin >> sum;

    bool isThePairPresent = isPair(arr, size, sum);
    if (isThePairPresent)
    {
        cout << "A pair is present with sum: " << sum;
    }
    else
    {
        cout << "No pair is present with sum: " << sum;
    }

    return 0;
}