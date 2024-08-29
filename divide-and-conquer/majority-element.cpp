class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ans;
        for(auto it:nums){
            if(count==0){
                ans=it;
            }
            count+=it==ans?1:-1;
        }
        return ans;
    }
};