#include <iostream>

using namespace std;

void func1(int n){
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    func1(n - 1);
}

/*
    This above function is converted to below by compiler, which is
    much faster and efficient than the above.
*/

void func2(int n){
    start:
        if(n == 0){
            return;
        }
        cout<<n<<" ";
        n -= 1;
        goto start;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<n<<" to 1: ";
    func1(n);
    cout<<"\n";
    cout<<n<<" to 1: ";
    func2(n);

    return 0;
}