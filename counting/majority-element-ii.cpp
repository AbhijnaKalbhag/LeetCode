class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        set<int>s;
        for(auto it:nums){
            mp[it]++;
            if(mp[it]>n/3){
              s.insert(it);
            }
        }
       return vector<int>(s.begin(),s.end());
    
    }
};