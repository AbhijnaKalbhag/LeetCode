class Solution {
public:
    bool judgeCircle(string moves) {
     int n=0,m=0;
     for(int i=0;i<moves.length();i++)
     {
         if(moves[i]=='U'){ n++;}
         else if(moves[i]=='D'){n--;}
         else if(moves[i]=='R'){m++;}
         else{ m--;}
     }   
     if(n==0&&m==0){ return true;}
     return false;
    }
};