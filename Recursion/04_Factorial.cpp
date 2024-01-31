#include<iostream>
using namespace std;
int factorial(int n){
    //Base case.
    if(n == 0 || n == 1)
        return 1;
    //Recursive Relation.
    return n*factorial(n-1);
}
int main(){
    int n = 8;
    int ans = factorial(n);
    cout << ans;
return 0;
}