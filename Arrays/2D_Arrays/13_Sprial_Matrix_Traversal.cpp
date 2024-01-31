#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();

        int total_elements = n*m;

        int startingRow = 0;
        int endingRow = n-1;
        
        int startingCol = 0;
        int endingCol = m-1;

        int count = 0;

        while(count < total_elements){

            for(int i = startingCol; i <= endingCol && count < total_elements; i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            for(int i = startingRow; i <= endingRow && count < total_elements; i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            for(int i = endingCol; i >= startingCol && count < total_elements; i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            for(int i = endingRow; i >= startingRow && count < total_elements; i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

   vector<int> ansis =  spiralOrder(matrix);
    for(int i = 0 ; i < ansis.size(); i++){
        cout << ansis[i] << " ";
        }
    
    return 0;
}