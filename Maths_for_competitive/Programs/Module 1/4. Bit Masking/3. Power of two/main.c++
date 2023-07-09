#include <iostream>

using namespace std;

bool isPow2(int n){
    return (n != 0) && ((n & (n - 1)) == 0);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Is "<<n<<" a power of two? ";
    isPow2(n)?cout<<"Yes":cout<<"No";
    
    
    return 0;
}