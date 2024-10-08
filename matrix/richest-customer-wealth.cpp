class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

       int max=0;
       int sum;
       for(auto it:accounts){
        sum=accumulate(it.begin(),it.end(),0);
        if(sum>max){max=sum;}
       } 
       return max;
    }
};