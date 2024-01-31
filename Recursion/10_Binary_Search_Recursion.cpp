#include <iostream>
using namespace std;

int isBinary(int arr[], int left, int right, int target)
{
  if(left > right)
    return -1;

  int mid = left+(right-left)/2;

  if(arr[mid] == target)
        return mid;

    else if (target < arr[mid])
        return isBinary(arr,left,mid-1,target);

    else if (target > arr[mid])
        return isBinary(arr,mid+1,right,target);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int left = 0;
    int size = 5;
    int right =size - 1;
    int target = 30;
    int ans = isBinary(arr, left, right, target);

    if (ans)
        cout << "Key is found at : " << ans;

    else
        cout << "Key is not found.";
    return 0;
}