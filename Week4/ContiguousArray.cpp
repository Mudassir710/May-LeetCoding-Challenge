/*
Mohammed Mudassir Mohiuddin:- https://leetcode.com/explore/featured/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3341/
Contiguous Array
*/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int maxLength = 0;
        unordered_map<int, int> diffs;
        int sum = 0;
        diffs[0] = -1; // init case
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i] == 0 ? -1 : 1;
            if (diffs.find(sum) != diffs.end()) {
                maxLength = max(maxLength, i - diffs[sum]);
            } 
            else {
                diffs[sum] = i;
            }
        }
        return maxLength;
    }
};