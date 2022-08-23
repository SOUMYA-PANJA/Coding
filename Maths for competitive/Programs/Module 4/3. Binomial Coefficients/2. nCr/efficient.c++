#include <iostream>

using namespace std;

int nCr(int n, int r){
    int dp[n + 1][r + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
        for (int j = 1; j <= min(i, r); j++)
        {
            if (i == j) {
                dp[i][j] = 1;
            }
            else {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]);
            }
        }
    }
    return dp[n][r];
}

int main(){
    int n, r;
    cout<<"Enter nubmer of items: ";
    cin>>n;
    cout<<"Enter number of items to be choose: ";
    cin>>r;
    cout<<n<<"C"<<r<<": "<<nCr(n, r);

    return 0;
}