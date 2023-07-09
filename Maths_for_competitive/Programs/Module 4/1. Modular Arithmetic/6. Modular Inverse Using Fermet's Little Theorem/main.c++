#include <bits/stdc++.h>

/* 
    1. m is Prime.
    2. a is not divisible by m.
*/

using namespace std;

int modPow(int a, int p, int mod){
    int res = (int)pow(a, p - 1) % mod;
    return res;
}

void getInv(int a, int mod){
    if (a%mod == 0)
    {
        cout<<"Doesn't Exist";
    }
    else
    {
        cout<<modPow(a, mod - 1, mod);
    }
}

int main(){
    int a, MOD;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter MOD: ";
    cin>>MOD;
    cout<<"Modular multiplicative inverse of "<<a<<" modulo "<<MOD<<" : ";
    getInv(a, MOD);
    
    return 0;
}