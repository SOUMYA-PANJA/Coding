#include <iostream>

using namespace std;

bool isFeasible(int arr[], int size, int k, int ans){
    int req = 1, sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (sum + arr[i] > ans)
        {
            req++;
            sum = arr[i];
        }
        else
        {
            sum += arr[i];
        }
    }
    return (req <= k);
}

int minPages(int arr[], int size, int k){
    int sum = 0, mx = 0, mid;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        mx = max(mx, arr[i]);
    }
    int low = mx, high = sum, res = 0;
    while(low <= high){
        mid = low + (high - low) / 2;
        if(isFeasible(arr, size, k, mid)){
            high = mid - 1;
            res = mid;
        }
        else{
            low = mid + 1;
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
    
    int key;
    cout << "Enter number of students: ";
    cin >> key;
    
    int minPagesToBeAllocated = minPages(arr, size, key);
    
    cout<<"Minimum number of pages to be allocated to "<<key<<" students are: "<<minPagesToBeAllocated;

    return 0;
}