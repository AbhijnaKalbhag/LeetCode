int subtractProductAndSum(int m){
int temp,sum=0,product=1,n;
temp=m;
while(temp>0)
{
    n=temp%10;
    sum=sum+n;
    product=product*n;
    temp=temp/10;
}
return product-sum;

}