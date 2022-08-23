#include <iostream>

using namespace std;

int dCount(int n){
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    int c, a = 0, b = 1;
    for (int i = 3; i <= n; i++)
    {
        c = (i - 1)*(a + b);
        a = b;
        b = c;
    }
    return c;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Total number of dearrangements: "<<dCount(n);
    
    return 0;
}