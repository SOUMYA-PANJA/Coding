#include <iostream>

using namespace std;
/*
If there are n people and each time the kth person is killed, so at last who will remain alive.
If positon start from index zero.
*/
int jos(int n, int k) {
    if(n == 1) {
        return 0;
    }
    return (jos(n-1, k) + k) % n;
}

int main(){
    int n, k;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter k: ";
    cin>>k;
    cout<<"The person still alive is at index: "<<jos(n, k);

    return 0;
}