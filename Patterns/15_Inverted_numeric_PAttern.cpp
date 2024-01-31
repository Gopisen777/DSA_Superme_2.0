#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
            cout << j + 1 << " ";

        for (int k = 0; k < 2 * n - 2 * i - 2; k++)
            cout << "  ";

        for (int l = 0; l < i + 1; l++)
            cout << i - l + 1 << " ";
        cout << endl;
    }
    return 0;
}