#include <iostream>
using namespace std;

void countZeroOne(int arr[], int size)
{
    int ZeroCount = 0;
    int OneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
            OneCount++;

        else
            ZeroCount++;
    }
    cout << "The total number of Zero is " << ZeroCount << endl;
    cout << "The total number of One is " << OneCount << endl;
}
int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    int size = 16;
    countZeroOne(arr, size);
    return 0;
}