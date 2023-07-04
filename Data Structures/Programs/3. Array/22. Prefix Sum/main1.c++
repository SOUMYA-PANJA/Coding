#include <iostream>

using namespace std;
/* 
bool isEqui(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int lsum = 0;
    for (int i = 0; i < size; i++)
    {
        if(lsum == sum - arr[i]){
            return true;
        }
        lsum += arr[i];
        sum -= arr[i];
    }
    return false;
}
 */

bool isEqui(int arr[], int size){
    int rSum = 0;
    for (int i = 0; i < size; i++)
    {
        rSum += arr[i];
    }
    int lSum = 0;
    for (int i = 0; i < size; i++)
    {
        rSum -= arr[i];
        if (rSum == lSum)
        {
            return true;
        }
        lSum += arr[i]
    }
    return false;
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
    cout<<boolalpha;
    cout << "Is there any equilibrium point in the array? "<< isEqui(arr, size);

    return 0;
}