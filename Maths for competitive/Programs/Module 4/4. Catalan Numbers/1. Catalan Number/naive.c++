#include <iostream>

using namespace std;

int catalan(int n){
    if(n == 0){
        return 1;
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res += catalan(i) * catalan(n - i - 1);
    }
    return res;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<n<<"th catalan number: "<<catalan(n);

    return 0;
}