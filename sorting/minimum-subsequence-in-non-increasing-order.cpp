class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
       sort(nums.begin(),nums.end(),greater<int>());

         vector<int> a;
        int i=1;
         for(auto it: nums)
         {
             a.push_back(it);
           int  sum1=accumulate(nums.begin()+i,nums.end(),0);
            i++;
           int  sum2=accumulate(a.begin(),a.end(),0);
            if(sum2>sum1){ break;}
         }
         return a; 
    }
  
};