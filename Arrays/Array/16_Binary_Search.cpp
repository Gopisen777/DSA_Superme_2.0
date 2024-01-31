#include <iostream>
using namespace std;

int isPresent(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + (end - start)) / 2;

   for (;start <= end;)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int forBinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size -1;
    int mid = (start + (end - start)) / 2;
    for (;start <= end;)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[5] = {11, 44, 55, 77, 88};

    int key = 55;
    int answer = isPresent(arr, 5, key);

    int answr1 = forBinarySearch(arr, 5, key);
    if (answer == 1 )
        cout << "key " << key << " is present.";

    else
        cout << "Key " << key << " is Absent.";
    return 0;
}
