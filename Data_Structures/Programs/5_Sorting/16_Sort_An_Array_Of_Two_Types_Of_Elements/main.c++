#include <iostream>

using namespace std;

void segPosNeg(int arr[], int low, int high) {
    int i = low - 1, j = high + 1;
    while(true){
        do
        {
            i++;
        } while (arr[i] < 0);
        do
        {
            j--;
        } while (arr[j] > 0);
        if(i >= j){
            return;
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

    cout<<"Before sorting:\n";
    printArray(arr, size);

    segPosNeg(arr, 0, size - 1);
    
    cout<<"After sorting:\n";
    printArray(arr, size);
    


    return 0;
}