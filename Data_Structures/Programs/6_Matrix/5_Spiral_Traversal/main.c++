#include <iostream>
#include <vector>

using namespace std;

void printSpiral(vector<vector<int>> &arr){
    cout << "Traversing the matrix in spiral pattern:\n";
    int top = 0, right = arr[0].size() - 1, bottom = arr.size() - 1, left = 0;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout<<arr[top][i]<<" ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout<<arr[i][right]<<" ";
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left <= right){
            for (int i = bottom; i >= top; i--)
            {
                cout<<arr[i][left]<<" ";
            }
            left++;
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
    printSpiral(arr);

    return 0;
}