#include <iostream>

using namespace std;

int power(int a, int x){
    int res = 1;
    while (x > 0)
    {
        if (x % 2 != 0)
        {
            res *= a;
        }
        a *= a;
        x /= 2; // x = x>>1
    }
    return res;
}

int main(){
    int a, x;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter power: ";
    cin>>x;

    cout<<a<<" to the power "<<x<<" is "<<power(a, x);
    
    return 0;
}
