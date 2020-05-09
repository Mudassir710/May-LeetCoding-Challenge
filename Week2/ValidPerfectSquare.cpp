/*
Mohammed Mudassir Mohiuddin

Valid Perfect Square:- https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/
*/



class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true;
        int left = 0, right = num/2;
        while(left <= right){
            double mid = left + (right - left)/2;
            if(mid == num/mid) 
                return true;
            if(mid > num/mid)
                right = mid-1;
            else
                left =  mid+1;
            
        }
        return false;
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

