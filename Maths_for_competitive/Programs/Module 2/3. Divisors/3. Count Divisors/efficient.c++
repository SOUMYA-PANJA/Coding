#include <iostream>

using namespace std;

int countDivisors(int n){
    int res = 1;
    for (int i = 2; i*i <= n; i++)
    {
        int count = 0;
        while (n%i == 0)
        {
            count++;
            n = n/i;
        }
        res *= (count+1);
    }
    if (n >= 2)
    {
        res *= 2;
    }
    return res;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Numbers of divisors of "<<n<<" is: ";
    cout<<countDivisors(n);

    return 0;
}