#include <iostream>
#include <math.h>

using namespace std;

void findGroups(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if(arr[i] != arr[i - 1]){
            if (arr[i] != arr[0])
            {
                cout<<"From "<<i<<" to ";
            }
            else{
                cout<<i - 1<<"\n";
            }
        }
    }
    if(arr[size - 1] != arr[0]){
        cout<<size - 1;
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
    printArray(arr, size);
    cout << "Minimum consecutive filps required to make all the elements same in the array: \n";
    findGroups(arr, size);

    return 0;
}