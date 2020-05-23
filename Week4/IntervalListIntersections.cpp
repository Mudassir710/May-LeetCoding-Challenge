/*
Mohammed Mudassir Mohiuddin
Interval List Intersections:- https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3338/
*/

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        int lenA = A.size();
        int lenB = B.size();
        vector<vector<int>> res;
        if(lenA == 0 || lenB == 0) 
            return res;
        //if() return A;
        
        int i=0,j=0;
        while(i<lenA && j<lenB){
            int low = max(A[i][0],B[j][0]);
            int high= min(A[i][1],B[j][1]);
            
            if(low <= high)
                res.push_back({low,high});
            
            if(A[i][1] < B[j][1])
                ++i;
            else
                ++j;
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

