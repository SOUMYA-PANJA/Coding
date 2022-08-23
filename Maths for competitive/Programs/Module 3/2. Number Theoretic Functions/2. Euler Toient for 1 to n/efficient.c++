#include <iostream>

using namespace std;

void totFunc(int n){
    int phi[n+1];
    for (int i = 2; i <= n; i++)
    {
        phi[i] = i;
    }
    cout<<1<<" ";
    for (int p = 2; p <= n; p++)
    {
        if (phi[p] == p)
        {
            phi[p] = p - 1;
            for (int i = 2*p; i <= n; i += p)
            {
                phi[i] = (phi[i]/p)*(p-1);
            }
        }
        cout<<phi[p]<<" ";
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