class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(auto it:nums)
        {
            if(it!=0)
            {
                nums[i++]=it;
            }
        }
        while(i<nums.size())
        {
            nums[i++]=0;
        }
    }
};