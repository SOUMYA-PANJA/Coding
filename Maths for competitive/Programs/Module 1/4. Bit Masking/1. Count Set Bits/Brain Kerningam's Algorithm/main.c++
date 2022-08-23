#include <iostream>

using namespace std;

int countBits(int n){
    int res = 0;
    while(n > 0){
        n = (n & (n - 1));
        res++;
    }
    return res;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Number of bits in binary of "<<n<<" is "<<countBits(n);
    return 0;
}