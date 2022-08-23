#include <iostream>

using namespace std;

int countDivisors(int n){
    int res = 2;  // We assume n > 1
    for (int i = 2; i * i <= n; i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
            {
                res++;
            }
            else
            {
                res += 2;
            }
        }
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