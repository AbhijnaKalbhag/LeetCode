class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     auto rsize=matrix.size();
     auto csize=matrix[0].size();
     vector<int>r;
     vector<int>c;
     for(int i=0;i<rsize;i++){
         for(int j=0;j<csize;j++){
            if(matrix[i][j]==0){
                r.push_back(i);
                c.push_back(j);
            }
         }
     }
     for(int i=0;i<rsize;i++){
         for(int j=0;j<csize;j++){
            if(matrix[i][j]!=0){
                if(find(c.begin(),c.end(),j)!=c.end()){
                    matrix[i][j]=0;
                }
                if(find(r.begin(),r.end(),i)!=r.end()){
                    matrix[i][j]=0;
                }
            }
         }
     }
     
    }
};