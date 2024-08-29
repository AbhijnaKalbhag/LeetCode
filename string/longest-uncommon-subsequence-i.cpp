class Solution {
public:
    int findLUSlength(string a, string b) {
     if(a!=b){
         if(a.length()>b.length())
          return a.length();
         else 
            return b.length();}
     else{ return -1;}   
    }
};