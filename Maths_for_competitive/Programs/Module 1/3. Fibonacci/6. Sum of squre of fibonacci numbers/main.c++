#include <iostream>
#include "../1. Fibonacci/main.h"

using namespace std;

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Sum of squre of fibonacci number upto "<<a<<" is "<<fib(a)*fib(a+1);
    
    return 0;
}