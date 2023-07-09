#include <iostream>
#include <vector>

using namespace std;

int MAX = 10000;
vector<int> least_Prime(MAX + 1, 0);
void smallestPrimeFactors(){
    least_Prime[1] = 1;
    for(int i = 2; i <= MAX; i++){
        if(least_Prime[i] == 0){
            least_Prime[i] = i;
            for(int j = i*i; j <= MAX; j += i){
                if(least_Prime[j] == 0){
                    least_Prime[j] = i;
                }
            }
        }
    }
}

int query(int n){
    int res = 1, prev = least_Prime[n];
    int term = prev, sum = 1 + prev;
    n = n / prev;
    while (n > 1)
    {
        if (least_Prime[n] == prev)
        {
            term = term * prev;
            sum = sum + term;
        }
        else
        {
            prev = least_Prime[n];
            res = res * sum;
            term = prev;
            sum = 1 + term;
        }
        n = n / prev;
    }
    res = res * sum;
    return res;
}

int main(){
    smallestPrimeFactors();
    int n;
    cout<<"Enter number of queries: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter query "<<i+1<<": ";
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"Sum of divisors of "<<arr[i]<<" is "<<query(arr[i])<<"\n";    
    }

    return 0;
}