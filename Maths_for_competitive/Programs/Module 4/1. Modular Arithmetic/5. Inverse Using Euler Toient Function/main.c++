#include <bits/stdc++.h>
#include "D:/Programming/Maths for competitive/Programs/Module 3/2. Number Theoretic Functions/1. Euler Toient Function/phi.h"

using namespace std;

int modPow(int a, int p, int mod){
    int res = pow(a, p - 1);
    res = res % mod;
    return res;
}

void getInv(int a, int mod){
    if (__gcd(a, mod) != 1)
    {
        cout<<"Doesn't Exist";
    }
    else
    {
        cout<<modPow(a, phi(mod), mod);
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