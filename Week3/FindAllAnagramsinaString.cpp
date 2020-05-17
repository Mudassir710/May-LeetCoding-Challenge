/*
Mohammed Mudassir Mohiuddin
Find All Anagrams in a String:- https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3332/
*/

class Solution {
public:
    int parr[26];
    int arrW[26];
    
    bool check(){
        for(int i=0; i<26; ++i)
            if(parr[i]!=arrW[i])
                return false;
        return true;
    }
    
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int lens = s.size();
        int lenp = p.size();
        if(lens == 0 || lens<lenp) return res;
        for(int i=0; i<lenp; ++i){
            ++parr[p[i]-'a'];
            ++arrW[s[i]-'a'];
        }
        
        //if(check()) res.push_back(0);
        int i;
        for(i=lenp; i<=lens; ++i){            
            if(check())
                res.push_back(i-lenp);
            
            if(i!=lens)
                ++arrW[s[i]-'a'],--arrW[s[i-lenp]-'a'];
        }
        
        return res;
    }
};

/*
     //  a s d f g h lens = 6
                                                  //   0 1 2 3 4 5
                                                //     a b         lenp = 2 
                                            //         0 1   
                                            
                                            //,cout<<str[i]<<" "<<arr[str[i]-'a']<<" "<<resarr[str[i]-'a']<<"\n" ;
        
                                            */

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

