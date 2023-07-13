#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Assumed that we have ana odd sized matrix
// And all have distinct element
int matMedian(vector<vector<int>> &arr){
    int m = arr.size(), n = arr[0].size();
    int min = arr[0][0], max = arr[0][n - 1];
    for (int i = 1; i < m; i++)
    {
        if (min > arr[i][0])
        {
            min = arr[i][0];
        }
        if(max < arr[i][n - 1]){
            max = arr[i][n - 1];
        }
    }
    int medPos = (m * n + 1) / 2;
    int mid, midPos;
    while (min < max)
    {
        mid = (min + max) / 2;
        midPos = 0;
        for (int i = 0; i < m; i++)
        {
            midPos += upper_bound(arr[i].begin(), arr[i].end(), mid) - arr[i].begin();
        }
        if(midPos < medPos){
            min = ++mid;
        }
        else{
            max = mid;
        }
    }
    return min;
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
    
    int median = matMedian(arr);
    cout << "The median is: " << median;

    return 0;
}