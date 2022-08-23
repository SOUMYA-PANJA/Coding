#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout<<setprecision(4);
    double x = 15.5683, y = 34287.1;
    cout<<x<<" "<<y<<"\n";

    double z = 1.23;
    cout<<showpoint<<z<<"\n"; // shows the trailing zeroes
    cout<<showpos<<z<<"\n";
    cout<<uppercase<<y<<"\n";

    return 0;
}