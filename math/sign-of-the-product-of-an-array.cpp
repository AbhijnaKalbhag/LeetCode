class Solution {
public:
    int arraySign(vector<int>& nums) {
       int p=0,n=0;
       for(auto it:nums)
       { 
           if(it==0){ return 0;}
           if(it<0){ n++;}
       }
       if(n%2==0){ return 1;}
       return -1;
    }
};