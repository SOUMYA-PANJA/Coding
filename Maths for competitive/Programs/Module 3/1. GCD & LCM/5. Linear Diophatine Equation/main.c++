#include <iostream>
#include "../3. Extended Euclidean Algorithm/main.h"

using namespace std;

void printSol(int a, int b, int c){
    int x0, y0;
    if (a == 0 && b == 0)
    {
        if (c != 0)
        {
            cout<<"No Solution";
        }
        else
        {
            cout<<"X = "<<0<<"\n";
            cout<<"Y = "<<0<<"\n";
        }
        return;
    }
    
    int g = gcdExt(a, b, x0, y0);
    if (c % g != 0)
    {
        cout<<"No Solution";
    }
    else
    {
        cout<<"X = "<<x0*(c/g)<<"\n";
        cout<<"Y = "<<y0*(c/g)<<"\n";
    }
    
}

int main(){
    int a, b, c;
    
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c:";
    cin>>c;

    printSol(a, b, c);

    return 0;
}