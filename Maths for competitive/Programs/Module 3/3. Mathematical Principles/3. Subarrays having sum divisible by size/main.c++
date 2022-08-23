#include <iostream>
#include <vector>

using namespace std;

void array(int arr[], int n){
    cout<<"Enter elements of array:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element for index "<<i<<" : ";
        cin>>arr[i];
    }
}

void printSubArr(int arr[], int n){
    vector <int> preSum(n), rem(n, -1);
    preSum[0] = arr[0];
    if (preSum[0] % n == 0)
    {
        cout<<0<<" "<<0;
        return;
    }
    rem[preSum[0] % n] = 0;
    for (int i = 1; i < n; i++)
    {
        preSum[i] = preSum[i - 1] + arr[i];
        int r = preSum[i] % n;
        if (r == 0)
        {
            cout<<0<<" "<<i;
            return;
        }
        if (rem[r] != -1)
        {
            cout<<rem[r] + 1<<" "<<i;
            return;
        }
        rem[r] = i;
    }
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    array(arr, n);
    printSubArr(arr, n);
    
    return 0;
}