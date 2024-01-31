#include <iostream>
using namespace std;

int isPrint(int n)
{
    if (n == 1)
        return 1;

    return n + isPrint(n - 1);
}
int main()
{

    int n = 5;
    int ans = isPrint(n);
    cout << ans;
    return 0;
}