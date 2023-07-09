#include <iostream>

using namespace std;

const int mod = 1000000007;

long long getFact(long long n){
    long long res = 1;
    for (long long i = 2; i <= n; i++)
    {
        res = ((res%mod) * (i%mod))%mod;
    }
    return res;
}

int main(){
    long long n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" with mod "<<mod<<" is "<<getFact(n);

    return 0;
}