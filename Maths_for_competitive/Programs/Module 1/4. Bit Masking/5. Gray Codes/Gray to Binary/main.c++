#include <iostream>

using namespace std;

int toBinary(int x){
    int res = 0;
    while(x > 0){
        res = res^x;
        x = x>>1;
    }
    return res;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Gray to Binary code of "<<n<<" is "<<toBinary(n)<<" in binary.";
    
    return 0;
}