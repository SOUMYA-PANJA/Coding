#include <iostream>

using namespace std;

int main(){
    bool a = true;
    cout<<a<<"\n";
    cout<<boolalpha; // from std namespace
    cout<<a<<"\n";
    cout<<noboolalpha;
    cout<<a<<"\n";
        
    return 0;
}