#include <iostream>

using namespace std;

int nCr(int n, int r){
    int dp[r + 1] = { 0 };

    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = min(i, r); j > 0; j--)
        {
            dp[j] = (dp[j] + dp[j - 1]);
        }
    }
    return dp[r];
}

int catalan(int n){
    // Don't Use this implementation as catalan number have large valuse for small inputs

    return nCr(2*n, n)/(n+1);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<n<<"th catalan number: "<<catalan(n);

    return 0;
}