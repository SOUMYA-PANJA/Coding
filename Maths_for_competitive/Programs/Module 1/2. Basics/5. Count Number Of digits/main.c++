#include <iostream>
#include <cmath>

using namespace std;

int countDigits(int n){
    return (int)log10((double)n)+1;
}

int main(){
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Number of digits in "<<n<<" is "<<countDigits(n);
    
    return 0;
}