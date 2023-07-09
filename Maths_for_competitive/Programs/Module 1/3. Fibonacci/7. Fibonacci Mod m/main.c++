#include <iostream>
#include <vector>

using namespace std;

int fibMod(int n, int m){
    vector <int> fib;
    fib.push_back(0);
    fib.push_back(1);
    int p;
    for (int i = 2; i < m*m; i++)
    {
        fib.push_back((fib[i-1]+fib[i-2])%m);
        if (fib[i] == 1 && fib[i-1] == 0)
        {
            p = i - 1;
            break;
        }
    }
    return fib[n%p];
}

int main(){
    int n, m;
    cout<<"Enter index: ";
    cin>>n;
    cout<<"Enter mod value: ";
    cin>>m;
    cout<<"F"<<n<<" mod "<<m<<" is "<<fibMod(n, m);
    
    return 0;
}