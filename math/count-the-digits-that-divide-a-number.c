int countDigits(int num){
int n=0,temp,k;
temp=num;
while(temp>0)
{
    k=temp%10;
    if(num%k==0)
    {
        n++;
    }
    temp=temp/10;
}
return n;
}