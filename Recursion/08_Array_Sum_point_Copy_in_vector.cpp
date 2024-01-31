#include <iostream>
#include <vector>
using namespace std;
void slove(int arr[], int size, int index, vector<int>&v)
{
    if (index >= size)
        return;

    if (arr[index] % 2 == 0)
        v.push_back(arr[index]);

    slove(arr,size,index+1,v);
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    vector<int>v;
    slove(arr, size, index, v);

    for(int num = 0; num < v.size(); num++)
    {
        cout << v[num] << " ";
    }
    return 0;
}