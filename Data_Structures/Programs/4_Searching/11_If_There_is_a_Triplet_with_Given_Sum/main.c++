#include <iostream>

using namespace std;

bool isPair(int arr[], int low, int high, int sum)
{
    int left = low;
    int right = high;
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

bool isTriplet(int arr[], int size, int sum)
{
    for (int i = 0; i < size - 2; i++)
    {
        if(isPair(arr, i + 1, size - 1, sum - arr[i])){
            return true;
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

    bool isTheTripletPresent = isTriplet(arr, size, sum);
    if (isTheTripletPresent)
    {
        cout << "A triplet is present with sum: " << sum;
    }
    else
    {
        cout << "No triplet is present with sum: " << sum;
    }

    return 0;
}