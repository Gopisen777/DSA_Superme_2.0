#include <iostream>
using namespace std;
int isPrint(int n)
{

    if (n == 1){
        //cout << n << " ";
        return 1;
    }

    int ans = isPrint(n - 1);
    cout << n << " ";
    return ans;
}
int main()
{
    int n;
    cin >> n;

    int ans = isPrint(n);
    cout << ans << " ";
    return 0;
}
