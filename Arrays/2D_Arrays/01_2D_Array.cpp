#include <iostream>
using namespace std;
void inputArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "enter the elements for index " << i << " of " << j << " is : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
}

void printArray(int arr[][3], int row, int col)
{
    cout << "The Final Array is : " << endl;
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
    int arr[3][3]; // This is a declaration of a 2d array or Matrix Array.
    int row, col;
    row = 3;
    col = 3;

    inputArray(arr, row, col);
    printArray(arr, row, col);
    return 0;
}