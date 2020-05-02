/*
Mohammed Mudassir Mohiuddin
Jewels and Stones:- https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3317/
*/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        bool slet[26]={0},clet[26]={0};
        int Jlen = J.size();
        for(char& ch : J){
            if(ch >='a' && ch <= 'z') slet[ch - 'a'] = 1;
            if(ch >='A' && ch <= 'Z') clet[ch - 'A'] = 1;
        }
        int res = 0;

        for(char& ch : S){
            if(ch >='a' && ch <= 'z' && slet[ch - 'a'] == 1) ++res;
            if(ch >='A' && ch <= 'Z' && clet[ch - 'A'] == 1) ++res;
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

