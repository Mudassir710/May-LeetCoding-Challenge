/*
Mohammed Mudassir Mohiuddin
Counting Bits:- https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3343/
*/

class Solution {
public:
    /*int getcount(int num){
        int count =0;
        while(num){
            if(num & 1)
                ++count;
            num = (num>>1);
        }
        return count;
        
    }*/
    vector<int> countBits(int num) {
        vector<int> noOfOnes(num+1);
        
        for(int i=1; i<=num; ++i){
            noOfOnes[i] = noOfOnes[i&(i-1)] + 1 ;
        }
        return noOfOnes;
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();