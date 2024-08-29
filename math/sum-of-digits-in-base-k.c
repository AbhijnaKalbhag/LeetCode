int sumBase(int n, int k){
int temp,num=0;
temp=n;
while(temp>0){
  num=num+(temp%k); 
  temp=temp/k;  
}
return num;
}