#include <iostream>
#include <vector>

using namespace std;

void search(vector<vector<int>> &arr, int key){
    int top = 0, right = arr[0].size();
    while(top < arr.size() && right >= 0){
        if(arr[top][right] == key){
            cout << key << " found at arr["<<top<<"]["<<right<<"]";
            return;
        }
        else if(arr[top][right] > key){
            right--;
        }
        else{
            top++;
        }
    }
    cout << key << " not found.";
}

void matrix(vector<vector<int>> &arr)
{
    cout << "Enter elements in the matrix:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << "Enter arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
        cout << "\n";
    }
}

void printMatrix(vector<vector<int>> &arr)
{
    cout << "Elements in the matrix:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    cout<< "\n";
}

int main()
{
    int M, N;
    cout << "Enter M: ";
    cin >> M;
    cout << "Enter N: ";
    cin >> N;

    vector<vector <int>> arr(M, vector<int> (N, 0));
    matrix(arr);
    printMatrix(arr);

    int key;
    cout<<"Enter element to be searched: ";
    cin >> key;
    
    search(arr, key);

    return 0;
}