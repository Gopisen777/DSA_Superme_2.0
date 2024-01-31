#include <iostream>
using namespace std;
int main()
{
    int arr[3][4];
    int n, m;
    n = 3;
    m = 4;


//YAHA MAIN FASA THA INPUT WAALE POINT MEIN ***************
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[j][i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}