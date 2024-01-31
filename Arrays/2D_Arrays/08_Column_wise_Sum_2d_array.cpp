#include <iostream>
using namespace std;

void printArray(int arr[][3], int row, int col)
{
    // Printing the sum of every column values....
    for (int i = 0; i < col; i++)
    {
        int sum = 0;

        for (int j = 0; j < row; j++)
        {

            sum += arr[j][i];
        }
        cout << sum << " ";
    }
}
int main()
{
    int arr[3][3];
    int row, col;

    row = 3;
    col = 3;

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> arr[j][i];
        }
    }

    printArray(arr, row, col);
    return 0;
}