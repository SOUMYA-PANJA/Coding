#include <iostream>

using namespace std;

int power(int a, int x){
    if(x == 0){
        return 1;
    }
    int temp = power(a, x / 2);
    temp = temp * temp;
    if(x % 2 == 0){
        return temp;
    }
    else{
        return (temp * a);
    }
}

int main(){
    int a, x;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter power: ";
    cin>>x;

    cout<<a<<" to the power "<<x<<" is "<<power(a, x);
    
    return 0;
}
