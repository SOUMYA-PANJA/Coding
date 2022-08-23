#include <iostream>

using namespace std;

long long getSub(long long a, long long b, long long mod){
    long long res = ((a%mod) - (b%mod))%mod;
    if (res < 0)
    {
        res = (res + mod)%mod;
    }
    
    return res;
}

int main(){
    long long a, b, MOD;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter MOD: ";
    cin>>MOD;
    cout<<a<<" - "<<b<<" with mod "<<MOD<<" is "<<getSub(a, b, MOD);

    return 0;
}