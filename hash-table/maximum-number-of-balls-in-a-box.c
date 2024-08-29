int countBalls(int lowLimit, int highLimit){
   int a[46]={0},i,temp,n,max=0;
   for(i=lowLimit;i<=highLimit;i++){
       temp=i;n=0;
       while(temp>0){
           n=n+(temp%10);
           temp=temp/10;}
       a[n]++;
       }
   for(i=1;i<46;i++){
       if(a[i]>=max)
           max=a[i];}
   return max;
}
