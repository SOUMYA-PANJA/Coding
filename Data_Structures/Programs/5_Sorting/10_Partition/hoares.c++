#include <iostream>

using namespace std;

// All the elements to the left is smaller or equal to pivot and right is greater or equal to pivot.
// It performs less number of comparisions than lomuto.
int partition(int arr[], int low, int high) {
    int p = arr[low];
    int i = low - 1, j = high + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < p);
        do
        {
            j--;
        } while (arr[j] > p);
        if(i >= j){
            return j;
        }
        swap(arr[i], arr[j]);
    }
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

    cout<<"Before partitioning:\n";
    printArray(arr, size);

    int p = partition(arr, 0, size - 1);
    
    cout<<"After partitioning:\n";
    printArray(arr, size);
    cout<<"Partitioning index "<< p << " and vlaue "<< arr[p];
    


    return 0;
}