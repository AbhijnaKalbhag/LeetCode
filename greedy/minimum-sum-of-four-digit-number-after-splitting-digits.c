int minimumSum(int num){
int a[4],i=0;
int temp;
temp=num;
while(temp>0)
{
    a[i]=temp%10;
    i++;
    temp=temp/10;
}
int min1=9,min2=9,j,k,l;
for(int i=0;i<4;i++)
{
    if(a[i]<min1)
    {
        min1=a[i];
        j=i;
    }
}
for(int i=0;i<4;i++)
{
    if(a[i]<min2 && i!=j)
    {
        min2=a[i];
        k=i;
    }
}
int d1,d2;
for(int i=0;i<4;i++)
{
    if(i!=j && i!=k)
    {
        d1=a[i];
        l=i;
        break;
    }
}
for(int i=0;i<4;i++)
{
   if(i!=j&&i!=k &&i!=l)
    {
        d2=a[i];
        break;
    }
}
//min1 d1, min2 d2

return ((10*min1)+d1)+((10*min2)+d2);
}