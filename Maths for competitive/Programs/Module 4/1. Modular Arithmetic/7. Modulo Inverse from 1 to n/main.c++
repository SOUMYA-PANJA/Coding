#include <iostream>

using namespace std;

/* 
    mod is prime number greater than n
*/

void printInverse(int n, int mod){
    int inv[n+1];
    inv[1] = 1;
    cout<<inv[1]<<" ";
    for (int i = 2; i <= n; i++)
    {
        inv[i] = mod - (mod/i) * inv[mod%i]%mod;
        cout<<inv[i]<<" ";
    }
}

int main(){
    int n, mod;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter mod: ";
    cin>>mod;
    cout<<"Modular inverse from 1 to "<<n<<" are :";
    printInverse(n, mod);

    return 0;
}