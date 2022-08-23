#include <iostream>
#include <unordered_set>

using namespace std;

int calculateMex(unordered_set <int> Set){
    int Mex = 0;
    while (Set.find(Mex) != Set.end())
    {
        Mex++;
    }

    return Mex;
}

int calculateGrundy(int n, int picks[], int size){
    int dp[n + 1] = { 0 };
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        unordered_set <int> Set;
        for (int j = 0; j < size; j++)
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

void arra(int arr[], int size){
    cout<<"Enter elements:\n";
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element for index "<<i<<" : ";
        cin>>arr[i];
    }
}

int main(){
    int n, size;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Number of picks: ";
    cin>>size;
    int arr[size];
    arra(arr, size);

    cout<<"Grundy("<<n<<") : "<<calculateGrundy(n, arr, size);

    return 0;
}