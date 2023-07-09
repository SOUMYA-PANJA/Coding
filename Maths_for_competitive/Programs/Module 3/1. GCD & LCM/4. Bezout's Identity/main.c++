#include <bits/stdc++.h>

using namespace std;

bool isPossible(int a, int b, int c){
    return (c%__gcd(a,b) == 0);
}

int main(){
    int a, b, c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    cout<<"Bezout's Identity possible. : "<<boolalpha<<isPossible(a, b, c);

    return 0;
}