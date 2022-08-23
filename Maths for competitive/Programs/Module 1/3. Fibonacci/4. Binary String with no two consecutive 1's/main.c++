#include <iostream>
#include "../1. Fibonacci/main.h"

using namespace std;

int main(){
    int a;
    cout<<"Enter a length of binary string: ";
    cin>>a;
    cout<<"Total number of bainary string with length "<<a<<" is "<<fib(a+2);
    
    return 0;
}