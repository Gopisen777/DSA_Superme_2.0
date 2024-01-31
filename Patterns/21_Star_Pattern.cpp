#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // 1st part.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (i == 0 || j == 0 || j == n - i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int l = 0; l < 2 * i; l++)
        {
            cout << " ";
        }
        for (int k = 0; k < n - i; k++)
        {
            if (i == 0 || k == 0 || k == n - i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    // 2nd part..
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i || i == n - 1)
                cout << "*";

            else
                cout << " ";
        }

        for (int j = 0; j < 2 * n - 2 * i - 2; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < i + 1; k++)
        {
            if (k == 0 || k == i || i == n - 1)
                cout << "*";

            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}