#include <iostream>

using namespace std;

bool isPalindrome(string &str, int start, int end){
    if (start > end)
    {
        return true;
    }
    return ((str[start] == str[end]) && isPalindrome(str, start + 1, end - 1));
}

int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<"Is "<<str<<" a palindrome? "<<(isPalindrome(str, 0, str.length() - 1)?"Yes":"No");
    
    return 0;
}