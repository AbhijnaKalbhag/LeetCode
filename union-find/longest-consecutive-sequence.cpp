class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<1){
            return 0;
        }
        unordered_set<int> us{nums.begin(),nums.end()};
        int imax=1;
        for(auto it:us){
            if(us.count(it-1)){
                continue;
            }
            int len=1;
            it++;
            while(us.count(it)){
               len++;
               it++;
            }
            imax=max(imax,len);
        }
        return imax;
    }
};