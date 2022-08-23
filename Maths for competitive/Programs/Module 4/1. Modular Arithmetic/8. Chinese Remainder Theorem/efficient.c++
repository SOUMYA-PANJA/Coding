#include <iostream>
#include "D:/Programming/Maths for competitive/Programs/Module 4/1. Modular Arithmetic/4. Modular Inverse/main.h"

using namespace std;

int findX(int arr[], int m[], int n){
    int prod = 1;
    for (int i = 0; i < n; i++)
    {
        prod *= m[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int pi = prod / m[i];
        int inv = getInv(pi, m[i]);
        int term = (pi * inv * arr[i]) % prod;
        res = (res + term) % prod;
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