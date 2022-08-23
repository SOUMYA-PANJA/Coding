#include <bits/stdc++.h>

using namespace std;

int phi(int n){
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        if (__gcd(i, n) == 1)
        {
            res++;
        }
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