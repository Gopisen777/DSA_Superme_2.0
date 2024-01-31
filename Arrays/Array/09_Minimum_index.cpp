#include <iostream>
#include <limits.h>
using namespace std;

int MinimumIndex(int arr[], int size)
{
    int minIndex = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minIndex)
        {
            minIndex = min(arr[i], minIndex);
            // minIndex = arr[i];
        }
    }
    return minIndex;
}

int MaximumIndex(int arr[], int size)
{
    int MaxAnswer = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > MaxAnswer)
        {
            MaxAnswer = max(arr[i], MaxAnswer);
        }
    }
    return MaxAnswer;
}
int main()
{
    int arr[5] = {2, 4, 55, 6, -156};
    int size = 5;
    int ans = MinimumIndex(arr, 5);
    int answer = MaximumIndex(arr, 5);
    cout << ans << endl
         << answer;
    return 0;
}