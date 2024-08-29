class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0){return 0;}
       int a[102],i;a[0]=0;a[1]=1;
       int max=0;
       for(i=0;i<=n;i++)
       {
           if(a[i]>max){ max=a[i];}
           if(2*i<=n){
         a[2*i]=a[i];
         a[2*i+1]=a[i]+a[i+1];} 
       }
       return max;
    

    }
};