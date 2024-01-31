#include <iostream>
#include <vector>
using namespace std;
void isRotate(vector<int> &arr, int size)
{

    int temp = arr[size - 1];
    for (int i = size; i > 0; i--)
    {
        arr[i] = arr[i-1];
   
    }
        arr[0] = temp;
}
int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    int size = arr.size();


    cout << endl << "Before the Rotate the array : " << endl;


    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    

    isRotate(arr, size);

    cout << endl << "After the roatate array : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}