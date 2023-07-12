#include <iostream>

using namespace std;

// We assumed that the arrays have distinct elements.
void cycleSortDistinct(int arr[], int size) {
    int item, pos;
    for (int cs = 0; cs < size - 1; cs++)
    {
        item = arr[cs];
        pos = cs;
        for (int i = cs + 1; i < size; i++)
        {
            if(arr[i] < item){
                pos++;
            }
        }
        swap(item, arr[pos]);
        while (pos != cs)
        {
            pos = cs;
            for (int i = cs + 1; i < size; i++)
            {
                if(arr[i] < item){
                    pos++;
                }
            }
            swap(item, arr[pos]);
        }
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

    cout<<"Before sorting:\n";
    printArray(arr, size);

    cycleSortDistinct(arr, size);
    
    cout<<"After sorting:\n";
    printArray(arr, size);

    return 0;
}