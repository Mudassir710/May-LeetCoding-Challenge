/*
Mohammed Mudassir Mohiuddin
Majority Element:- https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3321/
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        unordered_map<int, int> seen;
        for(int& i : nums){
            if(++seen[i] > (len/2)) return i;
        }
        return -1;
        
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

