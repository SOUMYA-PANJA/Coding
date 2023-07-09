#include <iostream>
#include <iomanip>

using namespace std;
// Fixed
int main(){
    double x = 1.235, y = 1122456.453;
    cout<<fixed;
    cout<<x<<" "<<y<<"\n";
    cout<<setprecision(2);
    cout<<x<<" "<<y<<"\n";
    double z = 1.2e+7;
    cout<<z<<"\n";

    return 0;
}