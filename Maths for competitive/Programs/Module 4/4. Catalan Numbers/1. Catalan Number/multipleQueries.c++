#include <iostream>

using namespace std;

const int MAXN = 100001;

const int MOD = 1000000007;

int dp[MAXN];

void precompute(){
    dp[0] = 1;
    for (int i = 1; i <= MAXN; i++)
    {
        dp[i] = 0;
        for (int j = 0; j < i; j++)
        {
            dp[i]  = (dp[i] + dp[j] * dp[i - j- 1]) % MOD;
        }
        if (dp[i] >= MOD)
        {
            dp[i] = dp[i] - MOD;
        }
    }
}

int catalan(int n){
    return dp[n];
}

int main(){
    precompute();
    cout<<dp[3];
}