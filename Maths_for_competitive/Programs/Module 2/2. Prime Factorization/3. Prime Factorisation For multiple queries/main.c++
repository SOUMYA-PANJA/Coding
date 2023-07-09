#include <iostream>
#include <vector>

using namespace std;

int MAX = 10000;
vector<int> least_Prime(MAX + 1, 0);

void fillSmallestPrimeSieve(int n){
    least_Prime[1] = 1;
    for(int i = 2; i <= n; i++){
        if(least_Prime[i] == 0){
            least_Prime[i] = i;
            for(int j = i*i; j <= n; j += i){
                if(least_Prime[j] == 0){
                    least_Prime[j] = i;
                }
            }
        }
    }
}

void query(int x){
    while(x > 1){
        cout<<least_Prime[x]<<" ";
        x = x/least_Prime[x];
    }
}

void getqueries(int n){
    for (int i = 0; i < n; i++)
    {
        int x;
        cout<<"Enter "<<i<<"th query: ";
        cin>>x;
        cout<<"Prime factors of "<<x<<" are ";
        query(x);
        cout<<"\n";
    }
    
}

int main(){
    fillSmallestPrimeSieve(MAX);
    int n;
    cout<<"Enter a number of queries: ";
    cin>>n;
    getqueries(n);
    
    return 0;
}