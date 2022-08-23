#include <iostream>

using namespace std;

int table[256];

void initialize(){
    table[0] = 0;
    for(int i = 1; i < 256; i++){
        table[i] = (i & 1) + table[i/2];
    }
}

int countBits(int n){
    int res = table[n & 0xff];
    n = n>>8;
    res = res + table[n & 0xff];
    n = n>>8;
    res = res + table[n & 0xff];
    n = n>>8;
    res = res + table[n & 0xff];
    return res;
}

int main(){
    initialize();
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Number of bits in binary of "<<n<<" is "<<countBits(n);
    return 0;
}