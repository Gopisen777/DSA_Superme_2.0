#include<iostream>
using namespace std;
int main(){
int arr[7] = {23,-7,12,-10,-11,40,60};
int j = 0;
int n = 7;
for(int index = 0; index < n; index++){
    if(arr[index] < 0){
        swap(arr[index],arr[j]);
        j++;
    }
}

for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
}
return 0;
}