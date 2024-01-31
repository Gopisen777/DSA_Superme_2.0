#include <iostream>
#include <limits.h>
using namespace std;

int getMax(int arr[][2], int row, int col)
{
    int maxAns = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxAns)
            {
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}

int getMin(int arr[][2], int row, int col)
{
    int minAns = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < minAns)
            minAns= min(arr[i][j], minAns);
        }
    }
    return minAns;
}
int main()
{
    int col, row;
    row = 2;
    col = 2;
    int arr[2][2];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans = getMax(arr, row, col);
    cout << ans << endl
         << getMin(arr, row, col);
    return 0;
}