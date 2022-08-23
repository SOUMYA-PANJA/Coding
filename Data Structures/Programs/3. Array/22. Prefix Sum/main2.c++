#include <iostream>
#include <vector>

using namespace std;

/*
Given n ranges, find the maximum occuring number in this ranges.
*/

int maxOccRan(int L[], int R[], int size){
    vector <int> arr(1000); // Considering max range to be 1000
    for (int i = 0; i < size; i++)
    {
        arr[L[i]]++;
        arr[R[i]+1]--;
    }
    int maxm = arr[0], res = 0;
    for (int i = 1; i < 1000; i++)
    {
        arr[i] += arr[i - 1];
        if(maxm < arr[i]){
            maxm = arr[i];
            res = i;
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

    int L[size], R[size];

    cout<<"Enter elements for Lower ranges:\n";
    array(L, size);
    printArray(L, size);
    cout<<"Enter elements for Upper ranges:\n";
    array(R, size);
    printArray(R, size);
    cout<<"Maximum Occuring Elements In These Ranges Is: "<<maxOccRan(L, R, size);

    return 0;
}