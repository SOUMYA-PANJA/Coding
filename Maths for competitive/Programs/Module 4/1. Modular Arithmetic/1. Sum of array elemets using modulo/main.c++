#include <iostream>

using namespace std;

const int mod = 1000000007;

long long getSumMod(long long arr[], long long n){
    long long res = 0;
    for (long long i = 0; i < n; i++)
    {
        res = ((res%mod) + (arr[i]%mod))%mod;
    }
    return res;
}

void array(long long arr[], long long n){
    cout<<"Enter elements of array:\n";
    for (long long i = 0; i < n; i++)
    {
        cout<<"Enter element for index "<<i<<" : ";
        cin>>arr[i];
    }
}

int main(){
    long long n;
    cout<<"Enter size of array: ";
    cin>>n;
    long long arr[n];
    array(arr, n);
    cout<<"Sum of array elements with mod "<<mod<<" is "<<getSumMod(arr, n);

    return 0;
}