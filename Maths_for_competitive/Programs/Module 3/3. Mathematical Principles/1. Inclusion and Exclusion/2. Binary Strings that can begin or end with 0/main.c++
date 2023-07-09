#include <iostream>
#include <math.h>

using namespace std;

int count(int n){
    return 2*pow(2, n-1) - pow(2, n-2);
}

int main(){
    int n;
    cout<<"Enter length of binary string: ";
    cin>>n;
    cout<<"Count of binary strings that can either end or begin with 0 of length "<<n<<" are "<<count(n);

    return 0;
}