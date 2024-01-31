#include<iostream>
#include<vector>
using namespace std;
void isRotate(vector<int>& arr,int size,int k){

    int temp[2] = {10,20};
    for(int i = 0 ; i < size; i++){
        arr[i] = arr[i+2];
    }

    arr[size-1] = temp[0];
    arr[size-2] = temp[1];
}
int main(){
vector<int> arr = {10,20,30,40,50};

int size = arr.size();
int k = 2;

isRotate(arr,size,k);
    for(int i = 0 ; i < size; i++){
        cout << arr[i] << " ";
    }

return 0;
}