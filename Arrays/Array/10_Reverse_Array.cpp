#include <iostream>
using namespace std;
void ReverseArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {2, 4, 3, 5, 6};
    int size = 5;

    ReverseArray(arr, 5);

    return 0;
}