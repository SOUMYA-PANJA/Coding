#include <iostream>

using namespace std;

double getMedian(int arr1[], int size1, int arr2[], int size2)
{
    int begin1 = 0, end1 = size1, i1, i2, max1, min1, max2, min2;
    while (begin1 <= end1)
    {
        i1 = begin1 + (end1 - begin1) / 2;
        i2 = (size1 + size2 + 1) / 2 - i1;
        max1 = (i1 == 0) ? INT_MIN : arr1[i1 - 1];
        min1 = (i1 == size1) ? INT_MAX : arr1[i1];
        max2 = (i2 == 0) ? INT_MIN : arr2[i2 - 1];
        min2 = (i2 == size2) ? INT_MAX : arr2[i2];
        if (max1 <= min2 && max2 <= min1)
        {
            if ((size1 + size2) % 2 == 0)
            {
                return ((double)max(max1, max2) + min(min1, min2)) / 2;
            }
            else
            {
                return (double)max(max1, max2);
            }
        }
        else if (max1 > min2)
        {
            end1 = i1 - 1;
        }
        else
        {
            begin1 = i1 + 1;
        }
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

    double median = (size1 <= size2) ? getMedian(arr1, size1, arr2, size2) : getMedian(arr2, size2, arr1, size1);
    cout << "Median = " << median;

    return 0;
}