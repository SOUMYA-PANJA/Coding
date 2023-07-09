#include <iostream>

using namespace std;

int nCr(int n, int r){
    int res = 1;
    for (int i = n; i >= (n - r + 1); i--)
    {
        res *= i;
    }
    for (int i = 2; i <= r; i++)
    {
        res /= i;
    }
    return res;
}

int main(){
    int n, r;
    cout<<"Enter nubmer of items: ";
    cin>>n;
    cout<<"Enter number of items to be choose: ";
    cin>>r;
    cout<<n<<"C"<<r<<": "<<nCr(n, r);

    return 0;
}