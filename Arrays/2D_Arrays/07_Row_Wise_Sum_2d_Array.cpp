#include<iostream>
using namespace std;

void printArray(int arr[][3], int row, int col){
    //After the taken input now we apply the sum row wise..

    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
           
            sum = sum + arr[i][j];
            
        }
        cout << sum;
        cout << endl;
    }

}
int main(){
int arr[3][3];
int row,col;
row = 3;
col = 3;

for(int i =0; i < row; i++){
    for(int j = 0; j < col; j++){
        cin >> arr[i][j];
    }
}
printArray(arr,row,col);


return 0;
}