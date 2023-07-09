#include <iostream>

using namespace std;

void totFunc(int n){
    int phi[n+1];
    for (int i = 2; i <= n; i++)
    {
        phi[i] = i - 1;
    }
    cout<<1<<" ";
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2*i; j <= n; j += i)
        {
            phi[j] = phi[j] - phi[i];
        }
        cout<<phi[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Euler Toient for number 1 to "<<n<<" are ";
    totFunc(n);

    return 0;
}