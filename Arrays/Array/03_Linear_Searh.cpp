#include<iostream>
using namespace std;
bool LinearSearch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            
            return 1;
        }
        else{
            return 0;
        }
    }
    return -1;
}

void PrintArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
int main(){
int arr[6]={2,4,5,6,7,8};

int ans = LinearSearch(arr,6,5);
if(ans == 1){
    cout << "Key is present.";
}
else{
    cout << "Absent.";
}
PrintArray(arr,6);

return 0;
}