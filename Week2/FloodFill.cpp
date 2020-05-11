/*
Mohammed Mudassir Mohiuddin
Flood Fill:- https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3326/
*/


class Solution {
public:
    int R,C;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        R = image.size();
        C = image[0].size();
        int oldColor = image[sr][sc];
        if(oldColor != newColor)
            dfs(image,newColor,oldColor,sr,sc);
        return image;
    }
    void dfs(vector<vector<int>>& image, int nwC, int odC, int sr, int sc){
        if(sr>=0 && sr<R && sc>=0 && sc<C && image[sr][sc] == odC ){
            image[sr][sc] = nwC;
            dfs(image,nwC,odC,sr+1,sc);
            dfs(image,nwC,odC,sr-1,sc);
            dfs(image,nwC,odC,sr,sc-1);
            dfs(image,nwC,odC,sr,sc+1);
        }
        return;
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

