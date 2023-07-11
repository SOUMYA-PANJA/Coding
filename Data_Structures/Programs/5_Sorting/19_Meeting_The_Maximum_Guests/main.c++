#include <iostream>
#include <algorithm>

using namespace std;

/* 
    Arrival and departure time's are given as integer e.g., 1030 -> 10:30
    range-[0000, 2359]
    Find the maximum guests present at a time.
 */

int maxGuests(int arr[], int dep[], int n) {
    sort(arr, arr + n);
    sort(dep, dep + n);

    int i = 1, j = 0, res = 1, curr = 1;
    while(i < n && j < n){
        if(arr[i] <= dep[j]){
            curr++;
            i++;
        }
        else{
            curr--;
            j++;
        }
        res = max(res, curr);
    }
    return res;
}

void createArray(int arr[], int size)
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

    int arr[size], dep[size];
    cout << "Enter arrival array: ";
    createArray(arr, size);
    cout << "Enter departure array: ";
    createArray(dep, size);

    cout<<"Maximum number of guest at a time is: "<<maxGuests(arr, dep, size);

    return 0;
}