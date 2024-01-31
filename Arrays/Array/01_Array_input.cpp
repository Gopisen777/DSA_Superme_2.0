#include <iostream>
using namespace std;

// void UserInput(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//         cin >> arr[i];
// }

// int PrintArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     return 0;
// }
int main()
{
    int arr[5];
    // UserInput(arr, 5);
    // int answer = PrintArray(arr, 5);

    int n = 5;

    for(int i = 0; i < n; i++){
        cout << "Enter a value for " << i << " : ";
        cin >> arr[i];
    }


    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}