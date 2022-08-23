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

// Refer Iterative Power(using binary exponentiation)
vector<vector<int>> matExp(vector<vector<int>> &m, int n){
    int size = m.size();
    vector<vector<int>> res(size, vector<int>(size));
    for (int i = 0; i < size; i++)
    {
        res[i][i] = 1;
    }
    while (n > 0)
    {
        if(n & 1){ // checks if n is divisible by 2
            res = matMul(res, m);
        }
        m = matMul(m, m);
        n = n>>1;
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