#include <iostream>

using namespace std;

void func1(int n){
    if(n == 0){
        return;
    }
    func1(n - 1);
    cout<<n<<" ";
}

/*
    The below function is tail recursive of the above.
*/

void func2(int n, int k){
    if (n == 0){
        return;
    }
    cout<<k<<" ";
    func2(n - 1, k + 1);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"1 to "<<n<<": ";
    func1(n);
    cout<<"\n";
    cout<<"1 to "<<n<<": ";
    func2(n, 1);

    return 0;
}