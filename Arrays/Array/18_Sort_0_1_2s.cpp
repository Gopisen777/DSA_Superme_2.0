#include<iostream>
using namespace std;
int main(){
int arr[] = {0,1,0,1,0,1,2,2,0,1,2};
int n = 11;
int left = 0;   //0 se
int right = n-1;  //2 se
int index = 0;
while(index <= right){
    
    if(arr[index] == 0){
        swap(arr[index],arr[left]);
        left++;
        index++;
    }

    else if(arr[index] == 2){
        swap(arr[index], arr[right]);
        right--;
    }
   
    else{
        index++;
    }
}

for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
}
return 0;
}
