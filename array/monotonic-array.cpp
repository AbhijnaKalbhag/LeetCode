class Solution {
public:
    bool isMonotonic(vector<int> nums) {
      vector<int> a=nums;
      sort(a.begin(),a.end());
      vector<int> b=nums;
      sort(b.begin(),b.end(),greater<int>());
      if(a==nums || b==nums){ 
          return 1;
      }  
      return 0;
    }
};