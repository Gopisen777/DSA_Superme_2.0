#include <iostream>
using namespace std;
int ExtremePrintArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        if (left == right)
            cout << arr[left] << " ";

        else
        {
            cout << arr[left] << " ";
            cout << arr[right] << " ";
        }
        left++;
        right--;
    }
    return 0;
}

int main()
{
    int arr[5] = {20, 30, 40, 50, 60};
    int size = 5;
    ExtremePrintArray(arr, size);
    return 0;
}