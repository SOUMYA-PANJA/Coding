#include <iostream>
#include <unordered_set>

using namespace std;

int picks[] = {1, 2, 3};
const int s = 3;

int calculateMex(unordered_set <int> Set){
    int Mex = 0;
    while (Set.find(Mex) != Set.end())
    {
        Mex++;
    }

    return Mex;
}

int grundy(int n){
    int dp[n + 1] = { 0 };
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        unordered_set <int> Set;
        for (int j = 0; j < s; j++)
        {
            if (i - picks[j] >= 0)
            {
                Set.insert(dp[i - picks[j]]);
            }
        }
        dp[i] = calculateMex(Set);
    }
    
    return dp[n];
}

void winner(int n1, int n2){
    if (grundy(n1) == grundy(n2))
    {
        cout<<"2nd player wins.";
        return;
    }
    cout<<"1st player wins.";
}

void arra(int arr[], int s){
    cout<<"Enter elements:\n";
    for (int i = 0; i < s; i++)
    {
        cout<<"Enter element for index "<<i<<" : ";
        cin>>arr[i];
    }
}

int main(){
    int n1, n2;
    cout<<"Enter n1: ";
    cin>>n1;
    cout<<"Enter n2: ";
    cin>>n2;
    winner(n1, n2);
    
    return 0;
}