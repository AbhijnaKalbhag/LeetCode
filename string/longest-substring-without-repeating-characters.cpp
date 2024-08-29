class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0){
            return 0;
        }
        int maxlen=1;
        int l=0,r=0;
        unordered_map<char,int>mp;
        while(r<s.length()){
            if(mp.find(s[r])!=mp.end()){
                l=max(mp[s[r]]+1,l);
            }
             mp[s[r]]=r;
             maxlen=max(maxlen,r-l+1);
             r++;
        }
        return maxlen;
    }
};