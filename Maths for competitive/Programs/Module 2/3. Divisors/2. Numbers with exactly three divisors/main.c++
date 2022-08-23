#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

void print3DivNums(int n){
    int sr = sqrt(n);
    vector<bool> isPrime(sr+1, true);
    for (int i = 2; i <= sr; i++)
    {
        if(isPrime[i]){
            cout<<i*i<<" ";
            for (int j = i*i; j <= sr; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Numbers having exactly 3 divisors upto "<<n<<" is: ";
    print3DivNums(n);

    return 0;
}