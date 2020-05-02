/*
Mohammed Mudassir Mohiuddin
First Bad Version:- https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3316/
*/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        while(start < end){
            int mid = start + (end-start)/2;
            if(isBadVersion(mid)){
                if(!isBadVersion(mid-1)) return mid;
                end = mid;
            }else{
                start = mid+1;
            }
        }
        return n;
    }
};