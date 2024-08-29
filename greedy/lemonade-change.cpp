class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
     int fc=0,ft=0;
     int n=bills.size();
     if(bills[0]==5){fc++;}
     else{return 0;}
     for(int i=1;i<n;i++){
         if(bills[i]==5){fc++;}
         else if(bills[i]==10){fc--;ft++;}
         else if(ft>0){ft--;fc--;}
         else{fc-=3;}
         if(fc<0){return 0;}

         }
          return 1; 
     }
    
};