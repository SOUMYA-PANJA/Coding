#include <iostream>

using namespace std;

int gcd(int a, int b){
    while (b != 0)
    {
        a = a % b;
        swap(a, b);
    }
    return a;
}

int main(){
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);

    return 0;
}