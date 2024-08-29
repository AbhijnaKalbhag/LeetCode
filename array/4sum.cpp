class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            threeSum(nums,target,ans,i);
        }
        return ans;
    }
    private:
    void threeSum(vector<int>& nums,int target,vector<vector<int>>& ans,int k){
        int l,r;
        for(int i=k+1;i<nums.size();i++){
            l=i+1;
            r=nums.size()-1;
            if(i>k+1 && nums[i]==nums[i-1]){
                continue;
            }
            while(l<r){
                long long sum=(long long)nums[k]+nums[i]+nums[l]+nums[r];
                if(sum>target){
                    r--;
                }
                else if(sum<target){
                    l++;
                }
                else{
                    ans.push_back({nums[k],nums[i],nums[l],nums[r]});
                    l++;
                    while(nums[l]==nums[l-1 ]&& l<r){
                        l++;
                    }
                }
            }
        }
    }
};