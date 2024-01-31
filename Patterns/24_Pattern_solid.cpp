#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
for(int i = 0; i < n; i++){
    for(int j = 0; j < n-i; j++){
        cout << "* ";
    }

    for(int l = 0; l < 2*i; l++){
        cout << "  ";
    }
    for(int k = 0; k < n-i; k++)
        cout << "* ";
    cout << endl;
}


for(int i = 0; i < n; i++){
    for(int j = 0; j < i+1; j++)
        cout << "* ";
    
    for(int l = 0; l < 2*n-2*i-2; l++)
        cout << "  ";

    for(int k = 0; k < i+1; k++)
        cout << "* ";

    cout << endl;
}
return 0;
}