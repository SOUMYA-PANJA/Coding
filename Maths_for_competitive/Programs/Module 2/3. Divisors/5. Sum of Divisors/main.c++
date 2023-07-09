#include <iostream>

using namespace std;

int sumFactors(int n){
    int res = 1;
    for (int i = 2; i * i <= n; i++)
    {
        int sum = 1;
        int term = 1;
        while (n % i == 0)
        {
            n = n / i;
            term = term * i;
            sum += term;
        }
        res *= sum;
    }
    if (n >= 2)
    {
        res *= (n + 1);
    }
    return res;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of divisors of "<<n<<" is "<<sumFactors(n);

    return 0;
}