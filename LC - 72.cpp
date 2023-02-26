72. Edit Distance

CODE:
class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        int dp[m+1][n+1];
        for (int i = 0; i <= m; i++) {
            dp[i][0] = i;
        }
        for (int j = 0; j <= n; j++) {
            dp[0][j] = j;
        }
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (word1[i-1] == word2[j-1]) {
                    dp[i][j] = dp[i-1][j-1];
                } 
                else {
                    // Insert a character into word1
                    int insertOp = dp[i][j-1]; 
                    // Delete a character from word1
                    int deleteOp = dp[i-1][j]; 
                    // Replace a character in word1 with a character in word2
                    int replaceOp = dp[i-1][j-1]; 
                    // Take the minimum of the three operations and add 1
                    dp[i][j] = 1 + min({insertOp, deleteOp, replaceOp});
                }
            }
        }
        // Return the minimum edit distance between the entire strings
        return dp[m][n];
    }
};
