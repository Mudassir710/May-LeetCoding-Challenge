/*
Mohammed Mudassir Mohiuddin
Count Square Submatrices with All Ones:- https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3336/
*/

class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int res = 0;
        
        for(int i=0; i<matrix.size(); ++i){
            for(int j=0; j<matrix[0].size(); ++j){
                if(matrix[i][j] == 1 && j>0 && i>0){
                    matrix[i][j] = min(min(matrix[i][j-1],matrix[i-1][j]),matrix[i-1][j-1]) + 1;
                }
                res+=matrix[i][j];
            }
        }
        return res;
        
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

