class Solution {
public:
    bool isRobotBounded(string instructions) {
     int len=instructions.length();
     int dist=0,dir=0;
     for(int i=0;i<len;i++){
        if(instructions[i]=='G'){
          if(dir==0){dist++;}
          if(dir==-2||dir==+2){dist--;}
          if(dir==1){dist+=2;}
          if(dir==-1){dist-=2;} }
        if(instructions[i]=='L'){dir--;
            if(dir<-2){dir=1;} }
        if(instructions[i]=='R'){dir++;
              if(dir>+2){dir=-1; }
        } }

     if(dist==0||dir!=0){return 1;} 
     return 0;
    }
};