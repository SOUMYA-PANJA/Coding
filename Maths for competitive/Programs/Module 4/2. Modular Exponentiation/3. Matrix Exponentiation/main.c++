#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> matMul(vector<vector<int>> &a, vector<vector<int>> &b){
    int size = a.size();
    vector<vector<int>> prod(size, vector<int>(size));
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                prod[i][j] += (a[i][k]*b[k][j]);
            }
        }
    }
    return prod;
}

vector<vector<int>> matExp(vector<vector<int>> &m, int n){
    int size = m.size();
    vector<vector<int>> res(size, vector<int>(size));
    for (int i = 0; i < size; i++)
    {
        res[i][i] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        res = matMul(res, m);
    }
    return res;
}

void matrix(vector<vector<int>> &M){
    cout<<"Enter elements:\n";
    for (int i = 0; i < M.size(); i++)
    {
        for (int j = 0; j < M.size(); j++)
        {
            cout<<"Enter value for index ["<<i<<"]["<<j<<"]: ";
            cin>>M[i][j];
        }
    }
}

void printMatrix(vector<vector<int>> &M){
    cout<<"Elements in the matrix:\n";
    for (int i = 0; i < M.size(); i++)
    {
        for (int j = 0; j < M.size(); j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int size;
    cout<<"Enter size of matrix: ";
    cin>>size;
    vector<vector<int>> A(size, vector<int>(size));
    int n;
    cout<<"Enter exponentiation value: ";
    cin>>n;
    matrix(A);
    printMatrix(A);
    A = matExp(A, n);
    printMatrix(A);
    
    return 0;
}