#include <iostream>
#include "D:/Programming/Maths for competitive/Programs/Module 3/1. GCD & LCM/3. Extended Euclidean Algorithm/main.h"

using namespace std;

void getInv(int a, int mod){
    int x, y;
    if (gcdExt(a, mod, x, y) != 1)
    {
        cout<<"Doesn't Exist";
    }
    else
    {
        cout<<x;
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