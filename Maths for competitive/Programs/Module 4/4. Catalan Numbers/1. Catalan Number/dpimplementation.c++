#include <iostream>

using namespace std;

int catalan(int n){
    int dp[n + 1];
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = 0;
        for (int j = 0; j < i; j++)
        {
            dp[i] += dp[j] * dp[i - j - 1];
        }
    }
    return dp[n];
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<n<<"th catalan number: "<<catalan(n);

    return 0;
}