#include <iostream>
#include "../1. Euclidean Algorithm Optimized Solution/main.h"

using namespace std;

int lcm(int a, int b){
    return (a*b)/gcd(a, b);
}

int main(){
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm(a, b);

    return 0;
}