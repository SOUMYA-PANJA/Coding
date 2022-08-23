#include <iostream>

using namespace std;

int max3(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int maxPieces(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
    int res = max3(maxPieces(n - a, a, b, c), maxPieces(n - b, a, b, c), maxPieces(n - c, a, b, c));
    if(res == -1){
        return -1;
    }
    return res + 1;
}

int main(){
    int size, a, b, c;
    cout<<"Enter size of rope: ";
    cin>>size;
    cout<<"Enter size of cut a: ";
    cin>>a;
    cout<<"Enter size of cut b: ";
    cin>>b;
    cout<<"Enter size of cut c: ";
    cin>>c;
    cout<<"Maximum number of cuts can be made on a stick of size "<<size<<" and allowed cuts "<<a<<", "<<b<<", "<<c<<" is "<<maxPieces(size, a, b, c);

    return 0;
}