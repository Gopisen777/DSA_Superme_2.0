#include <iostream>
using namespace std;

int isCounting(int n)
{
    if (n == 1)
    {
        return 1;
    }
    cout << n << " ";
    return isCounting(n - 1);
}
int main()
{
    int n = 5;

    int ans = isCounting(n);
    cout << ans;
    return 0;
}