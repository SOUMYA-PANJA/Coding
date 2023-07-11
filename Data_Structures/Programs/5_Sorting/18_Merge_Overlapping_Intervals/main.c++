#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

/* 
    Given array of intervals.
    Interval = {2, 5}, {3, 8}
    merge these = {2, 8}
 */


int mergeIntervals(pair<int, int> arr[], int size) {
    sort(arr, arr + size); // Sorted according to the start time.
    int res = 0; // Elements from 0 to res is merged.
    for (int i = 1; i < size; i++)
    {
        if(arr[res].second >= arr[i].first){
            arr[res].second = max(arr[res].second, arr[i].second);
            arr[res].first = min(arr[res].first, arr[i].first);
        }
        else{
            res++;
            arr[res] = arr[i];
        }
    }
    return res + 1;
}

void createArray(pair<int, int> arr[], int size)
{
    cout << "Enter elements in the array: \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element for index" << i << ":\n";
        cout << "First: ";
        cin >> arr[i].first;
        cout << "Second: ";
        cin >> arr[i].second;
    }
}

void printArray(pair<int, int> arr[], int size)
{
    cout << "Elements in the array: { ";
    for (int i = 0; i < size; i++)
    {
        cout <<"{" << arr[i].first << ", " << arr[i].second << "} ";
    }
    cout << "}\n";
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    pair<int, int> arr[size];
    createArray(arr, size);

    cout<<"Before merging:\n";
    printArray(arr, size);

    size = mergeIntervals(arr, size);
    
    cout<<"After merging:\n";
    printArray(arr, size);
    
    return 0;
}