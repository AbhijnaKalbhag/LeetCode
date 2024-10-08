class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int l,r;
        int sum;
        for(int i=0;i<nums.size();i++){
            l=i+1;
            r=nums.size()-1;
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            while(l<r){
                sum=nums[i]+nums[l]+nums[r];
                if(sum<0){
                    l++;
                }
                else if(sum>0){
                    r--;
                }
                else{
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    while(nums[l]==nums[l-1] &&l<r){
                        l++;
                    }
                }
            }
        }
        return ans;
    }
};