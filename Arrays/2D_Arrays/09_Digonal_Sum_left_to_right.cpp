#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {2, 3, 4},
        {4, 5, 16}};
    int n = 3;
    int m = 3;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i];
    }
    cout << sum << endl;
    return 0;
}