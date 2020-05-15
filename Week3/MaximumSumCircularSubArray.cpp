/*
Mohammed Mudassir Mohiuddin
Maximum Sum Circular Subarray :- https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3330/
*/

class Solution {
public:
    bool flag = 1;
    int kadane(vector<int>& A, int len){
        int maxi=A[0],curr_max=A[0];
        for(int i=1; i<len; ++i){
            if(flag && A[i]>=0)
                flag=0;
            //curr_max+=A[i];    
            curr_max=max(curr_max+A[i], A[i]);
            maxi = max(maxi, curr_max);
            //curr_max=max(0,curr_max);
        }
        return maxi;
    }
    int maxSubarraySumCircular(vector<int>& A) {
        int len = A.size();
        int max_kadane = kadane(A,len);
        if(flag)
            return max_kadane;
        int max_kadane_corners = 0;    
        for(int i=0; i<len; ++i){
            max_kadane_corners+=A[i];
            A[i]=-A[i];
        } 
        max_kadane_corners += kadane(A,len); 
        //if(!max_kadane_corners) return max_kadane;
        return (max_kadane > max_kadane_corners)?max_kadane:max_kadane_corners;
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

