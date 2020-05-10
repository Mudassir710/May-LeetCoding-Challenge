/*
Mohammed Mudassir Mohiuddin
Find the Town Judge:- https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3325/
*/


class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int arr[10001] = {0};
        int  cnt[10001] = {0};
        int row = trust.size();
        
        for(int i=0; i<row; ++i){
            arr[trust[i][0]]=1;
            ++cnt[trust[i][1]];
        }

        for(int i=1; i<=N; ++i)
            if(!arr[i] && cnt[i]== (N-1))
                return i;
       
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

