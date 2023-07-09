#include <iostream>

using namespace std;

void kthBit(int n, int k){
    if(((n>>(k - 1)) & 1) == 1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

int main(){
    int n, k;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter k: ";
    cin>>k;
    cout<<"Is the "<<k<<"th bit in "<<n<<" is set? ";
    kthBit(n, k);
    
    return 0;
}