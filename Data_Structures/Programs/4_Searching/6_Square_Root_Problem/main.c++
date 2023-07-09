#include <iostream>

using namespace std;

/* 
    Find the floor of square root of N.
 */

int sqRoot(int x){
    int low = 1, high = x, ans = -1, mSq, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        mSq = mid * mid;
        if(x == mSq){
            return mid;
        }
        else if(mSq > x){
            high = mid - 1;
        }
        else{
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{   
    int key;
    cout << "Enter a number: ";
    cin >> key;
    
    int pos = sqRoot(key);
    cout<<"Floor of sqrt("<<key<<") is: "<<pos;

    return 0;
}