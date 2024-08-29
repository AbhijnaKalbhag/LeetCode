class Solution {
public:
    char findTheDifference(string s, string t) {
     if(s.length()==0){ return t[0];}

      unordered_map<char,int> a;
      for(auto c:s)
      {
          a[c]++;
      } 

      for(auto c:t)
      {
          if(a[c]==0)
          {
              return c;
          }
          a[c]--;
      }
      return t.back();

    }

};