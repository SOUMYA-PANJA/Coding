#include <iostream>

using namespace std;

int countTrailingZeros(int n){
    int res = 0;
    for (int i = 5; i <= n; i = i*5)
    {
        res += n/i;
    }
    return res;
}

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Number of zeros in !"<<a<<" is: "<<countTrailingZeros(a);
    
    return 0;
}