class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> merged;
    sort(intervals.begin(),intervals.end());
     int n=intervals.size();
     
     merged.push_back(intervals[0]);
     for(int i=1;i<n;i++){
       if(intervals[i][0]<=merged.back()[1]){
        merged.back()[1]=max(intervals[i][1],merged.back()[1]);
       }
       else{
        merged.push_back(intervals[i]);
       }
        
     }
     return merged;
    }
};