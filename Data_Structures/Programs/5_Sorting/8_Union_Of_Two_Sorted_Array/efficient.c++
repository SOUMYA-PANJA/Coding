#include <iostream>

using namespace std;

void printIntersection(int arr1[], int size1, int arr2[], int size2) {
    int i = 0, j = 0;
    while (i < size1 && j < size2)
    {
        if(i > 0 && arr1[i - 1] == arr1[i]){
            i++;
            continue;
        }
        if(j > 0 && arr2[j - 1] == arr2[j]){
            j++;
            continue;
        }
        if(arr1[i] < arr2[j]){
            cout<< arr1[i++] << " ";
        }
        else if(arr1[i] > arr2[j]){
            cout<< arr2[j++] << " ";
        }
        else{
            cout<< arr1[i++] << " ";
            j++;
        }
    }
    while (i < size1)
    {
        if(i > 0 && arr1[i - 1] != arr1[i]){
            cout<< arr1[i] << " ";
        }
        i++;
    }
    while (j < size2)
    {
        if(j > 0 && arr2[j - 1] != arr2[j]){
            cout<< arr2[j] << " ";
        }
        j++;
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
    int size1, size2;
    cout << "Enter size of array1: ";
    cin >> size1;

    int arr1[size1];
    array(arr1, size1);
    printArray(arr1, size1);

    cout << "Enter size of array2: ";
    cin >> size2;

    int arr2[size2];
    array(arr2, size2);
    printArray(arr2, size2);

    cout<<"Intersection of the arrays are: ";
    printIntersection(arr1, size1, arr2, size2);

    return 0;
}