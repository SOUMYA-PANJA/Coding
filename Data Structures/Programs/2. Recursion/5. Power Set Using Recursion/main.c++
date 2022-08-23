#include <iostream>

using namespace std;

void subSets(string s, string curr = "", int i = 0){
    if (i == s.length())
    {
        cout<<curr<<"\n";
        return;
    }
    subSets(s, curr, i + 1);
    subSets(s, curr+s[i], i + 1);
}

int main() {
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    subSets(s);

    return 0;
}