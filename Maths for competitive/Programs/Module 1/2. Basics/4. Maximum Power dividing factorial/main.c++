#include <iostream>

using namespace std;

int maxPF(int n){
    int res = -1;
    for (int i = 2; i*i <= n; i++)
    {
        while (n % i == 0)
        {
            res = i;
            n = n/i;
        }
    }
    if(n>1){
        res = n;
    }
    return res;
}

int largestPow(int n, int fact){
    int p = maxPF(n);
    int res = 0;
    while(fact > 0){
        fact = fact/p;
        res += fact;
    }
    return res;
}

int main(){
    int a, fact;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter a fact: ";
    cin>>fact;
    cout<<"Power of "<<a<<" that can divide !"<<fact<<" is: "<<largestPow(a, fact);
    
    return 0;
}