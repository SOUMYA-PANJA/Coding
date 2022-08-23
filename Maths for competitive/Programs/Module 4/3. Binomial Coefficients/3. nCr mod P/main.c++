#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll maxn = 100001, p = 1000000007;

ll fact[maxn], invf[maxn];

ll gcdExt(ll a, ll b, ll &x, ll &y){
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll g = gcdExt(b, a%b, x1, y1);
    x = y1;
    y = x1 - (a/b)*y1;
    return g;
}

ll getInv(ll a, ll mod){
    ll x, y;
    if (gcdExt(a, mod, x, y) != 1)
    {
        return -1;
    }
    else
    {
        return (x + mod) % mod;
    }
}

void primeComputes(){
    fact[0] = 1;
    fact[1] = 1;
    invf[0] = 1;
    invf[1] = 1;
    for (ll i = 2; i < maxn; i++)
    {
        fact[i] = (fact[i - 1] * i) % p;
        invf[i] = getInv(fact[i], p);
    }
}

ll query(ll n, ll r){
    return ((fact[n] * invf[r] % p) * invf[n - r]) % p;
}

void input(){
    ll k;
    cout<<"Enter number of inputs: ";
    cin>>k;
    ll arr[2][k];
    for (ll i = 0; i < k; i++)
    {
        cout<<"Enter n["<<i<<"] : ";
        cin>>arr[0][i];
        cout<<"Enter r["<<i<<"] : ";
        cin>>arr[1][i];
    }
    for (ll i = 0; i < k; i++)
    {
        cout<<arr[0][i]<<"C"<<arr[1][i]<<" : "<<query(arr[0][i], arr[1][i])<<"\n";
    }
    
}

int main(){
    primeComputes();
    for (ll i = 0; i < 10; i++)
    {
        cout<<fact[i]<<" : "<<invf[i]<<"\n";
    }
    
    input();

    return 0;
}