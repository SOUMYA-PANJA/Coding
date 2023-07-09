#include <iostream>
#include <unordered_set>

using namespace std;

int calculateMex(unordered_set <int> Set){
    int Mex = 0;
    while (Set.find(Mex) != Set.end())
    {
        Mex++;
    }

    return Mex;
}

int calculateGrundy(int n, int picks[], int size){
    if (n == 0)
    {
        return 0;
    }
    unordered_set <int> Set;
    for(int i = 0; i < size; i++){
        if (n - picks[i] >= 0)
        {
            Set.insert(calculateGrundy(n - picks[i], picks, size));
        }
    }
    return calculateMex(Set);
}

// Here I can't use array as name because included undordered set.
void arra(int arr[], int size){
    cout<<"Enter elements:\n";
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element for index "<<i<<" : ";
        cin>>arr[i];
    }
}

int main(){
    int n, size;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Number of picks: ";
    cin>>size;
    int arr[size];
    arra(arr, size);

    cout<<"Grundy("<<n<<") : "<<calculateGrundy(n, arr, size);
    // If answer is > 0 then 1st player is the winner.
    // Else if answer is = 0 the 2nd player is the winner.

    return 0;
}