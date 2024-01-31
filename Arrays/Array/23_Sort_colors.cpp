#include<iostream>
#include<vector>
using namespace std;


void isSortColor(vector<int>& arr,int size){
    int index = 0;
    int left = 0 ;
    int right = size-1;
    while(index <= right){
        if(arr[left] > 0){
            swap(arr[index],arr[right]);
            right--;
        }
        if(arr[index] == 0){
            swap(arr[index],arr[left]);
            left++;
            index++;
        }

    }
}
int main(){
vector<int>arr = {2,0,2,1,1,0};
int size = arr.size();
isSortColor(arr,size);

for(int i = 0 ; i < size; i++)
        cout << arr[i] << " ";
return 0;
}