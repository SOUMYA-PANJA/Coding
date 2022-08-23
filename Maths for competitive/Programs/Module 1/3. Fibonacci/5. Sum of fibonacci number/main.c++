#include <iostream>
#include "../1. Fibonacci/main.h"

using namespace std;

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Sum upto n "<<a<<"th fibonacci number is "<<fib(a+2) - 1;
    
    return 0;
}