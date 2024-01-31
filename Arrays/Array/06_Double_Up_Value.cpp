#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of index for " << i << " " ;
        cin >> arr[i];
        
        cout << 2 * arr[i];
        cout << endl;
    }
    return 0;
}