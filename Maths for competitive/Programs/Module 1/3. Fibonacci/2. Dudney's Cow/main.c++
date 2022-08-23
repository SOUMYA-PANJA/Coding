#include <iostream>
#include "../1. Fibonacci/main.h"

using namespace std;

int main(){
    int a;
    cout<<"Enter year: ";
    cin>>a;
    cout<<"Total number of cows at the end of year "<<a<<" is "<<fib(a);
    
    return 0;
}