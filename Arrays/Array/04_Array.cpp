#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

void PritArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    int size = 5;
    bool answer = LinearSearch(arr, 5, 8);
    if (answer == 1)
    {
        cout << "Key is found." << endl;
    }
    else
        cout << "Key is not found." << endl;
    // PritArray(arr, size);
    return 0;
}