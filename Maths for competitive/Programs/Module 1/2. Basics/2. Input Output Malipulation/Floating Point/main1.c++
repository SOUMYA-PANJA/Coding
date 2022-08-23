#include <iostream>

using namespace std;
// Default formats
int main(){
    double x = 1.23000;
    cout<<x<<"\n"; // Trailing zeros are not there

    double y = 1567.56732;
    cout<<y<<"\n"; // Default presision is 6

    double z = 1244567.45;
    cout<<z<<"\n"; // Values before decimal doesn't fit in 6 therfore converted

    double w = 124456.67;
    cout<<w<<"\n";

    double u = 123e+2;
    cout<<u<<"\n";
    
    return 0;
}