/*
Mohammed Mudassir Mohiuddin
K Closest Points to Origin:- https://leetcode.com/explore/featured/card/may-leetcoding-challenge/538/week-5-may-29th-may-31st/3345/
*/

class Solution {
public:
    static bool compare(pair<int,int> a, pair<int,int> b){
        return a.first < b.first;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        
        vector<pair<int,int>> v;
        
        for(int i=0; i<points.size(); i++)
            v.push_back({points[i][0]*points[i][0] + points[i][1]*points[i][1],i});
        
        sort(v.begin(),v.end(),compare);
        
        vector<vector<int>> res;
        
        for(int i=0; i<K; ++i)
            res.push_back(points[v[i].second]);
        
        return res;
    }
};