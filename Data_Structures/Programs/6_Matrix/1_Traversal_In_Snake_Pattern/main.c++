#include <iostream>
#include <vector>

using namespace std;

void printSnake(vector<vector<int>> &arr){
    cout << "Traversing the matrix in snake pattern:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        if (i & 1)
        {
            for (int j = arr[i].size() - 1; j >= 0; j--)
            {
                cout << arr[i][j] << "\t";
            }
            cout << "\n";
            
        }
        else
        {
            for (int j = 0; j < arr[i].size(); j++)
            {
                cout << arr[i][j] << "\t";
            }
            cout << "\n";
        }
    }
    cout << "\n";
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
    printSnake(arr);

    return 0;
}