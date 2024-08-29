class Solution {
public:
    bool isAnagram(string s, string t) {
     unordered_map<char,int> m;
     if(s.length()!=t.length()){return 0;}
     for(auto c:s)
     {
         m[c]++;
     }   
     for(auto c:t)
     {
         if(m[c]==0){return 0;}
         m[c]--;
     }
     
    return 1;     
    }
};