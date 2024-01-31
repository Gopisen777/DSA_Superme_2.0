#include<iostream>
using namespace std;

void SortNeagtive(int *arr, int size){
    
    int left = 0;
    for(int index = 0; index < size; index++){
       
        if(arr[index] < 0){
        swap(arr[index],arr[left]);
            left++;
        }
    }

}
int main(){
int arr[] = {-10,20,88,-99,75,20,-63};

int size = 7;

SortNeagtive(arr,size);

for(int i =0; i < size; i++)
    cout << arr[i] << " ";
return 0;
}