/*
Mohammed Mudassir Mohiuddin
Ransom Note:- https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/
*/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int rlen = ransomNote.size(), mlen =  magazine.size();
        if((!rlen && !mlen) ||(!rlen && mlen)) return true;
        if(rlen > mlen) return false;
        int arr[26] ={0};
        for(int i=0; i<mlen; ++i)
            ++arr[magazine[i]-'a'];
        for(int j=0; j<rlen; ++j)
            if(--arr[ransomNote[j]-'a'] < 0) return false;
            
        return true;
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();