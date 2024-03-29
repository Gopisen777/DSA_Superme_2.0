#include <iostream>
#include <vector>
using namespace std;

void Rotate(vector<int> &arr, int size)
{
    int temp = arr[0];
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
}
int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    int size = arr.size();

    cout << "Before the Calling Rotate function." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    Rotate(arr, size);
    cout << endl;
    cout << "Before the Calling Rotate function." << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}