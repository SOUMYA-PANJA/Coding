#include <iostream>
#include "../1. Fibonacci/main.h"

using namespace std;

int main(){
    int a;
    cout<<"Enter number of stairs: ";
    cin>>a;
    cout<<"Total number of ways to reath the "<<a<<"th is "<<fib(a+1);
    
    return 0;
}