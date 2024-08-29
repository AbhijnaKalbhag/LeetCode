class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int>mp;
     for(int i=0;i<nums.size();i++){
        if(mp.find(target-nums[i])!=mp.cend()){
            // auto it=mp.find(target-nums[i]);
            return{mp[target-nums[i]],i};
        }
         mp[nums[i]]=i;
     }
     throw;
    }
};