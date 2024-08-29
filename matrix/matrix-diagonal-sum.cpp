class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       int sum=0;
       int n=0;
       int l;
       l=mat[0].size();
       for(auto it:mat)
       {
           sum+=it[n];
           if(l%2!=0 && l/2==n){
                n++;
             continue;
           }
            sum+=*(it.end()-n-1);
             n++;
       } 
       
       return sum;
    }
};