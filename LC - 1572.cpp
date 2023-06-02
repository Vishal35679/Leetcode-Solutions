1572. Matrix Diagonal Sum

CODE:
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size(); 
        for(int i = 0; i < n; i++){
            if(i != (n-i-1)){
                sum += mat[i][i] + mat[i][n-i-1];
            }
            else{
                sum += mat[i][n-i-1];
            }
        }
        return sum;
    }
};
