#include<iterator>
class Solution {
public:
    int countGoodSubstrings(string s) {
     int n=0;
     for(auto it=begin(s);it<=end(s)-3;++it)
     {
         auto it1=std::next(it,1);
         auto it2=std::next(it,2);
        if(*it!=*(it1) && *(it1)!=*(it2) && *(it)!=*(it2)){ n++;}
     }   
     return n;

    }
};