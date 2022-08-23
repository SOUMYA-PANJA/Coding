#include <iostream>

using namespace std;

int findX(int arr[], int m[], int n){
    int res = 1;
    while (true)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            if((res % m[i]) != arr[i]){
                break;
            }
        }
        if(i == n){
            break;
        }
        res++;
    }
    return res;
}

void array(int arr[], int size){
    cout<<"Enter elements: \n";
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter elements for index "<<i<<": ";
        cin>>arr[i];
    }
}

int mul(int arr[], int size){
    int res = 1;
    for (int i = 0; i < size; i++)
    {
        res *= arr[i];
    }
    return res;
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;

    int arr[size], m[size];
    array(arr, size);
    array(m, size);
    
    cout<<"X = "<<findX(arr, m, size)<<" for mod "<<mul(m, size);
    
    return 0;
}