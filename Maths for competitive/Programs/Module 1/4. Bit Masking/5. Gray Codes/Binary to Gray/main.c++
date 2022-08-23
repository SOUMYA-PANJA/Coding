#include <iostream>

using namespace std;

int gray(int x){
    return x^(x>>1);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Gray code of "<<n<<" is "<<gray(n)<<" in binary.";

    return 0;
}