#include<iostream>
#include<vector>
using namespace std;

int isLinear(vector<int>& arr,int index, int target){
    if(arr[index] == target)
        return index;
    
    else
        return isLinear(arr,index+1,target);
    
return -1;
}
int main(){
vector<int>arr = {10,20,30,40,50,60,70,80};
int size = 8;
int index = 0;
int target = 80;
int ans = isLinear(arr,index,target);

if(ans)
    cout << "Key is found: " << ans << endl;

else
    cout << "Key is not found." << endl;
return 0;
}