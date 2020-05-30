/*
Mohammed Mudassir Mohiuddin
Uncrossed Lines:- https://leetcode.com/explore/featured/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3340/
*/


class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int n = A.size(), m = B.size();
        
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        
        for(int i=1; i<=n; ++i){
            for(int j=1; j<=m; ++j){
                dp[i][j] = max(max(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]+(A[i-1]==B[j-1]));
            }
        }
        return dp[n][m];
    }
};