#include<iostream>
using namespace std;



void isTranspose(int arr[][3], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = i; j < col; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main(){


    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int row = 3;
    int col = 3;


//Before Transpose......
    for(int i =0; i< row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

cout << endl << endl;
    isTranspose(arr,row,col);
    for(int i = 0;i< row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

