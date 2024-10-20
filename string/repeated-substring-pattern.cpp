class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        for(auto&[ch,cnt]:mp){
            if(cnt%2!=0){
                return false;
            }
        }
        return true;
    }
};