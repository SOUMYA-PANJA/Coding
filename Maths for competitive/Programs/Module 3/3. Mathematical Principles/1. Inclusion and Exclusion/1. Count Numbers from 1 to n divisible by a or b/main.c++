#include <iostream>

using namespace std;

int count(int a, int b, int n){
    return n/a + n/b - (n/(a*b));
}

int main(){
    int n, a, b;
    cout<<"Enter total numbers: ";
    cin>>n;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Count of numbers upto "<<n<<" that are divisible by "<<a<<" and "<<b<<" are "<<count(a, b, n);

    return 0;
}