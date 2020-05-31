/*
Mohammed Mudassir Mohiuddin
Edit Distance:- https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/538/week-5-may-29th-may-31st/3346/
*/


class Solution {
public:
    int minDistance(string word1, string word2) {
        int lenA = word1.size();
        int lenB = word2.size();
        
        vector<vector<int>> dp(lenA+1,vector<int>(lenB+1,0));
        
        //dp[0][0] =0;
        for(int i=0; i<=lenA; i++){
            for(int j=0; j<=lenB; j++){
                if(i==0) dp[i][j] = j;
                else if(j==0) dp[i][j] = i;
                else if(word1[i-1] == word2[j-1]) dp[i][j] = dp[i-1][j-1];
                else dp[i][j] = 1 + min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);
            }
        }
        return dp[lenA][lenB];
        
    }
};