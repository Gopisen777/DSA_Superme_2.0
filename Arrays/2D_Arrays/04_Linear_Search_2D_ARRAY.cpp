#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int key, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
                return true;
        }
    }
    return false;
}
int main()
{
    int arr[3][4];
    int key, row, col;
    row = 3;
    col = 4;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Enter the element you want to search : ";
    cin >> key;

    if (isPresent(arr, key, row, col) == 1)
    {
        cout << "KEy is Found..";
    }
    else
    {
        cout << "Key is not foound.";
    }
    return 0;
}