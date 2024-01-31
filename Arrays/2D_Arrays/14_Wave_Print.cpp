#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>>& arr, int nRows, int mCols){
    vector<int>ans;
    nRows = arr.size();
    mCols = arr[0].size();

    for(int startCol = 0; startCol < nRows; startCol++){
        if((startCol&1) == 0){

            for(int j = 0; j < mCols; j++){
                ans.push_back(arr[j][startCol]);
            }
        }

        else{
            for(int j = mCols-1; j >= 0; j--){
                ans.push_back(arr[j][startCol]);
            }
        }
    }
    return ans;
}
int main(){
vector<vector<int>>arr = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};

vector<int>ans1 = wavePrint(arr,3,3);
for(int i = 0; i < ans1.size(); i++){
    cout << ans1[i] << " ";
}
return 0;
}