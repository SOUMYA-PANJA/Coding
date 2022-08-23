#include <iostream>

using namespace std;

int dCount(int n){
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return (n - 1)*(dCount(n - 2) + dCount(n - 1));
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Total number of dearrangements: "<<dCount(n);
    
    return 0;
}