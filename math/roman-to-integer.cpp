class Solution {
public:
    int romanToInt(string s) {
      int sum=0;
      for(int i=s.length()-1;i>=0;i--)
      {
          if(s[i]=='I'){ sum+=1;}
          else if(s[i]=='V'){
             if(i>0 && s[i-1]=='I'){ i--; sum+=4;}
             else{
              sum+=5;}}
          else if(s[i]=='X'){ {
             if(i>0 && s[i-1]=='I'){ i--; sum+=9;}
             else{
              sum+=10;}}}
          else if(s[i]=='L')
          {
             if(i>0 && s[i-1]=='X'){i--; sum+=40;}
             else{
              sum+=50;}}
          else if(s[i]=='C')
          {
             if(i>0 && s[i-1]=='X'){ i--; sum+=90;}
             else{
              sum+=100;}}
          else if(s[i]=='D')
          {
             if(i>0 && s[i-1]=='C'){i--; sum+=400;}
             else{
              sum+=500;}}
          else
          {
             if(i>0 && s[i-1]=='C'){i--; sum+=900;}
             else{
              sum+=1000;}}
      }
      return sum;
    }
};