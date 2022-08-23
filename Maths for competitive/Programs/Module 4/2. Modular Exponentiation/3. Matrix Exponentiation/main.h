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
    while (n > 0)
    {
        if(n & 1){
            res = matMul(res, m);
        }
        m = matMul(m, m);
        n = n>>1;
    }
    
    return res;
}