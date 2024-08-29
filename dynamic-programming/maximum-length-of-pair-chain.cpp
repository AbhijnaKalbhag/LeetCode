class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
    int cnt=0;
    int prevEnd=INT_MIN;
    ranges::sort(pairs,[](const auto& a,const auto& b){return a[1]<b[1];});
    for(auto it:pairs){
        if(it[0]>prevEnd){
            cnt++;
            prevEnd=it[1];
        }
    }
    return cnt;
    }
};