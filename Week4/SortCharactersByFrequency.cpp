/*
Mohammed Mudassir Mohiuddin
Sort Characters By Frequency:- https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3337/
*/

class Solution {
public:

    static bool compare(pair<char,int>&a, pair<char,int>&b)
    {
        return a.second > b.second;
    }
    
    string frequencySort(string s) {
	
        if(s.length()==0 || s.length()==1 || s.length()==2) return s;
        
		unordered_map<char,int> mp;
		
        for(auto& ch: s)
            ++mp[ch];
        
        vector<pair<char,int>> v(mp.begin(),mp.end());
        
        sort(v.begin(),v.end(), compare);
        
        string str="";
        
        for(auto& it : v)
            while(it.second--)
                str+= it.first;
        
        return str;
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();



