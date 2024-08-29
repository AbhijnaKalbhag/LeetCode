bool squareIsWhite(char * coordinates){
int m,n;
m=coordinates[0];
n=coordinates[1]-'0';
if(m%2==0&&n%2==0){
    printf("%d %d",m,n);
    return 0;
}
else if(m%2!=0 && n%2!=0){
    printf("%d %d",m,n);
    return 0;
}
else{
printf("%d %d",m,n); 
return 1;}
}