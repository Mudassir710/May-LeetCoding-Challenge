/*
Mohammed Mudassir Mohiuddin
Remove K Digits:-  https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3328/
*/

class Solution {
public:
    //static int j;
    void buildMinIndx(string str, int k, string& res){
        if(k==0){
            res.append(str);
            return;
        }
        
        int len = str.size();
        if(len<=k)
            return;
        
        int minIndx=0;
        for(int i=1; i<=k; ++i)
            if(str[i] < str[minIndx])
                minIndx = i;
       // cout<<res<<"\n";
        //if(res.empty())
         //   if(str[minIndx]!='0') res.push_back(str[minIndx]);   
        //else
            res.push_back(str[minIndx]);
        
        string nw_str = str.substr(minIndx+1, len-minIndx);
        
        buildMinIndx(nw_str, k-minIndx, res);
    } 
    string removeKdigits(string str, int k) {
        if(str.size()<=k) return "0";
        string res="";
        buildMinIndx(str,k,res);
        //if (res=="0")
          //  return res;
        int len = res.length();
        int i=0;
        while(i<len && res[i]=='0') ++i;
        if(i==len) return "0";
        return res.substr(i,len-i+1);
        
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

