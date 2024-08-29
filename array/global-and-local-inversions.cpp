class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
    int maxe=-1;
    if (nums.size()<2){
        return true;
    }
    for(int i=0;i<nums.size()-2;i++){
        maxe=max(maxe,nums[i]);
        if(nums[i+2]<maxe){
            return false;
        }
    }
     return true;
    }
};