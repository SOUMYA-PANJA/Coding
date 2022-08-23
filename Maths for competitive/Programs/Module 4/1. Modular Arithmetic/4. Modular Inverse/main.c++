#include <iostream>

using namespace std;

void getInv(long long a, long long mod){
    for (long long i = 1; i < mod; i++)
    {
        if ((a * i)%mod == 1)
        {
            cout<<i;
            return;
        }
    }
    cout<<"Doesn't exist";
}

int main(){
    long long a, MOD;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter MOD: ";
    cin>>MOD;
    cout<<"Modular multiplicative inverse of "<<a<<" modulo "<<MOD<<" : ";
    getInv(a, MOD);

    return 0;
}