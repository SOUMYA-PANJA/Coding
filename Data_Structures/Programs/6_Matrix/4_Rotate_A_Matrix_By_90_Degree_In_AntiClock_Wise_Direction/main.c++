#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void transpose(vector<vector<int>> &arr){
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr[0].size(); j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void reverseColumnWise(vector<vector<int>> &arr){
    int low, high;
    for (int i = 0; i < arr[0].size(); i++)
    {
        low = 0, high = arr.size() - 1;
        while(low < high){
            swap(arr[low++][i], arr[high--][i]);
        }
    }
    
}

// Assumed that the matrix is a square matrix
void rotate90(vector<vector<int>> &arr){
    transpose(arr);
    reverseColumnWise(arr);
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
    
    rotate90(arr);
    cout << "After rotating the matrix by 90 degree in anticlock-wise direction:\n";
    printMatrix(arr);

    return 0;
}