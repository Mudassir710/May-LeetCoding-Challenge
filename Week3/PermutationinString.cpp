/*
Mohammed Mudassir Mohiuddin
Permutation in String:- https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3333/
*/


class Solution {
public:
    int arrs1[26];
    int arrs2[26];
    
    bool check(){
        for(int i=0; i<26; ++i)
            if(arrs1[i]!=arrs2[i])
                return false;
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        int lens1 = s1.size();
        int lens2 = s2.size();
        
        if(lens2<lens1)
            return false;
        
        for(int i=0; i<lens1; ++i){
            ++arrs1[s1[i]-'a'];
            ++arrs2[s2[i]-'a'];
        }
            
        for(int j=lens1; j<=lens2; ++j){
            if(check())
                return true;
            if(j!=lens2)
                ++arrs2[s2[j]-'a'];
            --arrs2[s2[j-lens1]-'a'];
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

