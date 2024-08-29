class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      vector<int>a;
      int r=matrix.size();
      int c=matrix[0].size();
      int k=r*c,count=0;
      int left=0,right=c-1,top=0,bottom=r-1;
      while(count<k){
          for(int i=left;i<=right&&count<k;i++){
              a.push_back(matrix[top][i]);
              count++;
          }
          top++;
          for(int i=top;i<=bottom&&count<k;i++)
          {
              a.push_back(matrix[i][right]);
              count++;
          }
          right--;
          for(int i=right;i>=left&&count<k;i--){
              a.push_back(matrix[bottom][i]);
              count++;
          }
          bottom--;
          for(int i=bottom;i>=top&&count<k;i--)
          {
              a.push_back(matrix[i][left]);
              count++;
          }
          left++;
      } 
      return a; 
    }
};