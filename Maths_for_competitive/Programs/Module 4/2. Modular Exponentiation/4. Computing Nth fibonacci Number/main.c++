#include <iostream>
#include <vector>
#include "D:/Programming/Maths for competitive/Programs/Module 4/2. Modular Exponentiation/3. Matrix Exponentiation/main.h"

using namespace std;

int nthFib(int n){
    vector<vector<int>> m = {{1, 1}, {1, 0}};
    vector<vector<int>> fib = matExp(m, n - 1);
    return fib[0][0];
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<n<<"th fibonnci number is: "<<nthFib(n);

    return 0;
}