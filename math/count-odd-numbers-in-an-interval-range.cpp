class Solution {
public:
    int countOdds(int a, int b) {
      if((a&1)&&(b&1)){ return (b-a+2)/2;}
      else if((a&1)||(b&1)){return(b-a+1)/2;}
      else return (b-a)/2; 
    }
};