int islandPerimeter(int** grid, int gridSize, int* gridColSize){
int count=0,i,j;
 for(i=0;i<gridSize;i++)
 {
     for(j=0;j<*gridColSize;j++)
     {
         if(grid[i][j]==1 && i-1<0){count++;}

         if(grid[i][j]==1 && j-1<0){count++;}

         if(grid[i][j]==1){
            
         if(i<gridSize-1 && grid[i+1][j]==0){count++;}
         if(i>0 && grid[i-1][j]==0){count++;}
    
         if(j<*gridColSize -1 &&  grid[i][j+1]==0){count++;}
         if(j>0 && grid[i][j-1]==0){count++;}
         }
         if(grid[i][j]==1 && i==gridSize-1){count++;}
         if(grid[i][j]==1 && j==*gridColSize -1){count++;}
     }
 }
 return count;

}