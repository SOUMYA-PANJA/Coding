#include <bits/stdc++.h>

using namespace std;

int phi(int n){
    int res = n;
    for (int p = 2; p*p <= n; p++)
    {
        if (res % p == 0)
        {
            while (n % p == 0)
            {
                n /= p;
            }
            res = res - res/p;
        }
    }
    if (n > 1)
    {
        res = res - res / n;
    }
    return res;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Count of numbers having gcd with "<<n<<" as 1 are "<<phi(n);
    
    return 0;
}