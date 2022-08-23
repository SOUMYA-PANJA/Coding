#include <iostream>

using namespace std;

void initialize(int arr[], int pre_sum[], int size){
    pre_sum[0] = arr[0];
    for (int i = 1; i < size; i++)
    {
        pre_sum[i] = pre_sum[i - 1] + arr[i];
    }
}

void getQueries(int pre_sum[], int k){
    int l, h;
    for (int i = 0; i < k; i++)
    {
        cout<<"Enter lower limit for query"<<i<<" : ";
        cin>>l;
        cout<<"Enter upper limit for query"<<i<<" : ";
        cin>>h;
        if(l != 0){
            cout<<"Sum of array elemets from index "<<l<<" to "<<h<<" is:"<<(pre_sum[h] - pre_sum[l - 1])<<"\n";
        }
        else{
            cout<<"Sum of array elemets from index "<<l<<" to "<<h<<" is:"<<pre_sum[h]<<"\n";
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
    int size, k;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    int pre_sum[size];
    array(arr, size);
    printArray(arr, size);
    initialize(arr, pre_sum, size);
    cout << "Enter number of queries: ";
    cin >> k;
    getQueries(pre_sum, k);

    return 0;
}