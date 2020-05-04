/*
Mohammed Mudassir Mohiuddin
Number Complement:- https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3319/
*/
class Solution {
public:
    int power(int base, int i){
        if(i == 0) return 1;
        else if(i % 2 == 0) {
            int res = power(base,i/2);
            return res * res;
        }
        else return base * power(base, i-1);
    }
    int findComplement(int num) {
       if(!num) return 1; 
       int tmp = num;
       int res = 0, i=0;
       while(num){
           bool bit = num%2;
           num/=2;
           if(!bit) res += power(2,i) * !bit;
           ++i;
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