#include <iostream>
using namespace std;
int main()
{
   
    int a = 100;
    int * ptr = &a;
    cout << &ptr;
    // char ch = 'A';
    // char *ptr1 = &ch;

    // cout << sizeof(ptr) << endl;
    // cout << sizeof(ptr1) << endl;
    cout << *ptr;
    return 0;
}