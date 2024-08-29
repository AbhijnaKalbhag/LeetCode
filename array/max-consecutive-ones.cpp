class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=0,maxlen=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                n++;
                
            }
            else{
                maxlen=max(maxlen,n);
                n=0;
            }
        }
        maxlen=max(maxlen,n);
        return maxlen;
    }
};