#include <iostream>
using namespace std;

int fiboNAcci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fiboNAcci(n - 1) + fiboNAcci(n - 2);
}
int main()
{

    int n = 4;
    int ans = fiboNAcci(n);

    cout << ans << " ";
    return 0;
}