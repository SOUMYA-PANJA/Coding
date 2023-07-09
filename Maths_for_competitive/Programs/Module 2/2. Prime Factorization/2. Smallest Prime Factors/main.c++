#include <iostream>
#include <vector>

using namespace std;

void smallestPrimeFactors(int n){
    vector<int> least_Prime(n+1, 0);
    cout<<1<<" ";
    for(int i = 2; i <= n; i++){
        if(least_Prime[i] == 0){
            cout<<i<<" ";
            for(int j = i*i; j <= n; j += i){
                if(least_Prime[j] == 0){
                    least_Prime[j] = i;
                }
            }
        }
        else{
            cout<<least_Prime[i]<<" ";
        }
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The smallest prime factors upto "<<n<<" is ";
    smallestPrimeFactors(n);
    
    return 0;
}