/*
Mohammed Mudassir Mohiuddin
Check If It Is a Straight Line :-  https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3323/
*/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int diffY = coordinates[1][1] - coordinates[0][1];
	    int diffX = coordinates[1][0] - coordinates[0][0];     
	    for( int i=2; i < coordinates.size(); i++ ) {
		    auto p = coordinates[i];
		    if( diffX*(p[1] - coordinates[0][1]) != diffY*(p[0] - coordinates[0][0]) )
			    return false;
	    }
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

