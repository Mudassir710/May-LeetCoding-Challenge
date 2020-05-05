/*
Mohammed Mudassir Mohiuddin
First Unique Character in a String:- https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3320/
*/
class Solution {
public:
    int firstUniqChar(string s) {
        int seen[26]={0};
        for(auto& ch: s)
            seen[ch - 'a']++;
        for(int i=0; i<s.size(); i++)
            if(seen[s[i] - 'a'] == 1) return i ;
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

