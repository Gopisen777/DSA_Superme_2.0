#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        //1st
        for (int j = 0; j < i + 1; j++)
        {
            if (i == n - 1 || j == 0 || j == i)
                cout << "* ";

            else
                cout << "  ";
        }


        //space
        for(int k = 0 ; k < 2*n-2*i-2; k++){
            cout << "  ";
        }

        //2nd
        for (int j = 0; j < i + 1; j++)
        {
            if (i == n - 1 || j == 0 || j == i)
                cout << "* ";

            else
                cout << "  ";
        }

        cout << endl;
    }
    return 0;
}