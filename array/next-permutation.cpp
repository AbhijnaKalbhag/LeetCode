class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        auto n=nums.size();
        int fi=-1,fj=-1,i;
        for(i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                fi=i;
            }
        }
        if(fi==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(int j=fi;j<n;j++){
                if(nums[j]>nums[fi-1]){
                    fj=j;
                }
            }
            swap(nums[fj],nums[fi-1]);
            reverse(nums.begin()+fi,nums.end());
        }
    }
};