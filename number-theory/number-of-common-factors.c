int commonFactors(int a, int b){
int m;
if(a>b){
    m=a;
}
else{
    m=b;
}
int n=0;
for(int i=1;i<=m;i++){
    if(a%i==0 && b%i==0){ n++;}
}
return n;
}