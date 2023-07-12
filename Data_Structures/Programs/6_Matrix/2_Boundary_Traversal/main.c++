#include <iostream>
#include <vector>

using namespace std;

void bTraversal(vector<vector<int>> &arr){
    cout << "Traversing the boundary of the matrix:\n";
    int M = arr.size(), N = arr[0].size();
    if(M == 1){
        for (int i = 0; i < N; i++)
        {
            cout << arr[0][i] << " ";
        }
    }
    else if(N == 1){
        for (int i = 0; i < M; i++)
        {
            cout << arr[i][0] << " ";
        }
    }
    else{
        for (int i = 0; i < N; i++)
        {
            cout << arr[0][i] << " ";
        }
        for (int i = 1; i < M; i++)
        {
            cout << arr[i][N - 1] << " ";
        }
        for (int i = N - 2; i >= 0; i--)
        {
            cout << arr[M - 1][i] << " ";
        }
        for (int i = M - 2; i > 0; i--)
        {
            cout << arr[i][0] << " ";
        }
    }
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
    bTraversal(arr);

    return 0;
}