#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bucketSort(int arr[], int size, int k) {
    int max_val = arr[0];
    for (int i = 1; i < size; i++)
    {
        if(arr[i] > max_val){
            max_val = arr[i];
        }
    }
    max_val++; // We incremented the maximum value because, if there are 4 buckets then k*arr[i]/max_val would give 4 at line 23 but the index of the bucket is 3 not 4.
    vector<int> bkt[k];
    int bIdx;
    for (int i = 0; i < size; i++)
    {
        bIdx = (k * arr[i]) / max_val;
        bkt[bIdx].push_back(arr[i]);
    }
    for (int i = 0; i < k; i++)
    {
        sort(bkt[i].begin(), bkt[i].end());
    }
    int idx = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < bkt[i].size(); j++)
        {
            arr[idx++] = bkt[i][j];
        }
    }
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
    createArray(arr, size);

    int k;
    cout << "Enter number of buckets: ";
    cin >> k;

    cout<<"Before sorting:\n";
    printArray(arr, size);

    bucketSort(arr, size, k);
    
    cout<<"After sorting:\n";
    printArray(arr, size);

    return 0;
}