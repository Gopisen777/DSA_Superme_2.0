#include <iostream>
using namespace std;
int isPresent(int arr[][2], int key, int row, int col)
{
    int start = 0;
    int end = row*col-1;
    int mid = (start + (end - start)) / 2;
    while (start <= end)
    {
        int element = arr[mid/col][mid%col];
        if (element == key)
        {
            return true;
        }

        if (element < key)
        {
            start = mid +1;
        }

        else
        {
            end = mid -1;
        }
        mid = (start + (end - start)) / 2;
    }
    return -1;
}
int main()
{
    // Binary Search apply in the 2d array.
    int arr[2][2] = {
        {1, 2},
        {5, 6}};
  
    int key = 2;
    int row = 2;
    int col = 2;
    int answer = isPresent(arr, key, row, col);
    if (answer == 1)
    {
        cout << "key is found.";
    }
    else
    {
        cout << "Key is not found.";
    }

    return 0;
}