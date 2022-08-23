#include <iostream>

using namespace std;

int gcdExt(int a, int b, int &x, int &y){
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int g = gcdExt(b, a%b, x1, y1);
    x = y1;
    y = x1 - (a/b)*y1;
    return g;
}

int main(){
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    int x, y;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcdExt(a, b, x, y)<<" with X = "<<x<<", Y = "<<y;

    return 0;
}