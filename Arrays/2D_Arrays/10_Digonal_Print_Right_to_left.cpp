#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {2, 16, 4},
        {4, 5, 6}};
    int n = 3;
    int m = 3;
    int sum = 0;
    for (int i = n-1 ; i >= 0; i--)
    {
        sum += arr[i][i];
        
    }
    cout << sum;
    return 0;
}