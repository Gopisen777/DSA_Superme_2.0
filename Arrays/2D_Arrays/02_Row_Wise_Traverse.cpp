#include <iostream>
using namespace std;
void printArray(int arr[][2], int row, int col)
{
    // Taking input in the array.

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cin >> arr[i][j];
        }
        
    }

    // Print the above taken input from the user.

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][2];
    int row, col;
    row = 3;
    col = 2;
    printArray(arr, row, col);
    return 0;
}