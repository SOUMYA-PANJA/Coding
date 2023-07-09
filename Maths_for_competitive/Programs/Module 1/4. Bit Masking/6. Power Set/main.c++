#include <iostream>
#include <math.h>

using namespace std;

void printPowerSet(string str){
    int size = str.length();
    int powSize = pow(2, size);
    for (int counter = 0; counter < powSize; counter++)
    {
        cout<<"'";
        for (int j = 0; j < size; j++)
        {
            if((counter&(1<<j)) != 0){
                cout<<str[j];
            }
        }
        cout<<"', ";
    }
}

int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<"The power set is {";
    printPowerSet(str);
    cout<<"\b\b}";
}