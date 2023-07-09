#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a = 26, b = 20;
    cout<<a<<" "<<b<<" "<<"\n";
    cout<<hex; // from namespace std
    cout<<a<<" "<<b<<" "<<"\n";
    cout<<oct; // from namespace std
    cout<<a<<" "<<b<<" "<<"\n";
    cout<<dec; // from namespace std
    cout<<a<<" "<<b<<" "<<"\n\n";

    cout<<showbase; // from namespace std
    cout<<a<<" "<<b<<" "<<"\n";
    cout<<hex; // from namespace std
    cout<<a<<" "<<b<<" "<<"\n";
    cout<<oct; // from namespace std
    cout<<a<<" "<<b<<" "<<"\n";
    cout<<dec; // from namespace std
    cout<<a<<" "<<b<<" "<<"\n\n";

    cout<<showpos; // from namespace std
    cout<<a<<" "<<b<<" "<<"\n";
    cout<<hex; // from namespace std
    cout<<a<<" "<<b<<" "<<"\n";
    cout<<oct; // from namespace std
    cout<<a<<" "<<b<<" "<<"\n";
    cout<<dec; // from namespace std
    cout<<a<<" "<<b<<" "<<"\n\n";

    cout<<uppercase; // from namespace std
    cout<<a<<" "<<b<<" "<<"\n";
    cout<<hex; // from namespace std
    cout<<a<<" "<<b<<" "<<"\n";
    cout<<oct; // from namespace std
    cout<<a<<" "<<b<<" "<<"\n";
    cout<<dec; // from namespace std
    cout<<a<<" "<<b<<" "<<"\n\n";
    cout<<nouppercase; // from namespace std
    cout<<noshowpos; // from namespace std

    cout<<noshowbase; // from namespace std

    // iomainp
    cout<<setw(5); // from namespace std
    cout<<setfill('*'); // from namespace std
    cout<<a<<" "<<"\n\n";
    cout<<setw(5); // You have to set it every time
    cout<<"Hi"<<"\n\n";
    cout<<setw(5);
    cout<<left; // from namespace std and we have right also
    cout<<a<<" "<<"\n\n";

    return 0;

}