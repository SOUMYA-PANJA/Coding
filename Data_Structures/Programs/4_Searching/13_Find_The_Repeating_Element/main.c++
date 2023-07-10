#include <iostream>

using namespace std;

int findRepeating(int arr[], int size){
    int slow = arr[0] + 1, fast = arr[0] + 1;
    do{
        slow = arr[slow] + 1;
        fast = arr[arr[fast] + 1] + 1;
    }while(slow != fast);
    
    slow = arr[0] + 1;
    while (slow != fast)
    {
        fast = arr[fast] + 1;
        slow = arr[slow] + 1;
    }
    return slow - 1;
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
    
    cout<< "The repeating element is: "<<findRepeating(arr, size);

    return 0;
}