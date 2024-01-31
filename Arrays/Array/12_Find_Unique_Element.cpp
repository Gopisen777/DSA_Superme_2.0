#include<iostream>
using namespace std;
int main(){
int arr[] = { 1,23,23,15,42,42,13,15,13};
int size = 9;

int ans = 0;

for(int i = 0; i < size ; i++){
 int k = arr[i]^ans;
}

for(int i = 0; i < size ; i++){
 cout << arr[i] << " ";
}

return 0;
}