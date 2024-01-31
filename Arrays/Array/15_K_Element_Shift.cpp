#include <iostream>
using namespace std;

void Kshift(int arr[], int size, int k)
{
    // Elements copy on the temp array.
    int temp[k];

    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = k; i < size; i++)
    {
        arr[i - k] = arr[i];
    }

    for (int i = size - k, j = 0; i < size; i++, j++)
    {
        arr[i] = temp[j];
    }
}
int main()
{
    int arr[] = {2,4,5,6,78,7};

    int size = 6;
    int k  = 2;
    Kshift(arr, size,k);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}