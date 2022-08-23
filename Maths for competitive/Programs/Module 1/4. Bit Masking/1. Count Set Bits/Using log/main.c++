#include <iostream>
#include <cmath>

using namespace std;

/* 
This function returns number of bits used in the representation of n.
e.g, n = 13 --> 1101
 */

int countSetBits(int n){
    return (int)log2(n)+1;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Number of bits in "<<n<<" is "<<countSetBits(n);

    return 0;
}