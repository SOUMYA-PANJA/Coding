#include <iostream>

using namespace std;

int partition(int arr[], int low, int high) {
    int p = arr[high]; // Assuming last element is pivot. If the pivot is given then swap is with the last element.
    // All elements to the left of p is smaller and right have equal to or greater than.
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if(arr[j] < p){
            swap(arr[++i], arr[j]);
        }
    }
    swap(arr[++i], arr[high]);
    return i;
}

int kthSmallestElement(int arr[], int size, int k){
    int low = 0, high = size - 1, p;
    while (low <= high)
    {
        p = partition(arr, low, high);
        if(p == k - 1){
            return p;
        }
        else if(p < k - 1){
            low = p + 1;
        }
        else{
            high = p - 1;
        }
    }
    return -1;
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

    int k;
    cout<<"Enter k: ";
    cin>>k;

    int idx = kthSmallestElement(arr, size, k);
    if(idx >= 0){
        cout<<k<<"th smallest element is: "<<arr[idx];
    }
    else{
        cout<<"Array size is small";
    }

    return 0;
}