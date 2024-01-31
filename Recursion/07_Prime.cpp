#include<iostream>
using namespace std;
bool isPrint(int n){
    int i = 2;
    if(n % i == 0)
        return true;

    return isprint(n-1);
}
int main(){
int n;
cin >> n;

bool ans = isPrint(n);
cout << ans ;
return 0;
}
