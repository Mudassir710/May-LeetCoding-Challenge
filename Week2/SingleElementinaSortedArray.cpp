/*
Mohammed Mudassir Mohiuddin
Single Element in a Sorted Array:-https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3327/
*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.empty()) return 0;
        if(nums.size()==1) return nums[0]; 
        int st=0;
        int ed=nums.size()-1;
        while(st<ed)
        {
            if(nums[st]!=nums[st+1])
                return nums[st];
            if(nums[ed]!=nums[ed-1])
                return nums[ed]; 
            int mid = st + (ed-st)/2;
            if(nums[mid-1]!=nums[mid] && nums[mid+1]!=nums[mid])
                return nums[mid];
            else if(mid%2 == 0)
            {
                if(nums[mid] == nums[mid+1])
                    st=mid+2;
                else
                    ed=mid-2;       
            }
            else
            {
                if(nums[mid] == nums[mid+1])
                    ed=mid-1;
                else
                    st=mid+1; 
            }
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



/*
[1,1,2,2,3,3,4,8]
1 1 3 3  4 4   
0 1 2 3 4 5 6  

mid = 4;
*/