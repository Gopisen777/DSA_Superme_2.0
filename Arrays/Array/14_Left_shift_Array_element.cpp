#include <iostream>
using namespace std;

void LeftShiftElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    int temp = arr[0];
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};

    int size = 6;

    LeftShiftElement(arr, size);
    return 0;
}