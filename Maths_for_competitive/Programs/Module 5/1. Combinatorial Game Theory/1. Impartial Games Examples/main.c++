#include <iostream>

using namespace std;

/*
Given a pile of 'n' coins, each of the two players can pick coins on its turn. The player that makes the last move wins. Each player can pick 1 to k coins.
*/

void findWinner(int n, int k){
    if (n % (k + 1) == 0)
    {
        cout<<"2nd player wins.";
        return;
    }
    cout<<"1st player wins.";
}

int main(){
    int n, k;
    cout<<"Enter number of coins: ";
    cin>>n;
    cout<<"Enter maximum number of coins can pick: ";
    cin>>k;
    findWinner(n, k);

    return 0;
}