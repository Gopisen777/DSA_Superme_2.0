#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int sum = 0;
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        cout << " Enter the value of index " << i << "  ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        cout << "Sum is a index " << i << " for is : " << sum << endl;
    }
    return 0;
}