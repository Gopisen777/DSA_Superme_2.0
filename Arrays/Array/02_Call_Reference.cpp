#include<iostream>
using namespace std;

int refVar(int &a, int &b){

int c = a + b;
return c;
}


int main(){
int a, b;
cin >> a >>b;
int answer = refVar(a,b);

cout << answer << " ";
return 0;
}