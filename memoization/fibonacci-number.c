int fib(int n){
int f1=-1,f2=1,f3;
if(n==1||n==2){return 1;}
for(int i=0;i<=n;i++){
    f3=f1+f2;
    f1=f2;
    f2=f3;
}
return f3;
}