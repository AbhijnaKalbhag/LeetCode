int findGCD(int* nums, int numsSize){
int i,min=1001,max=-1;
for(i=0;i<numsSize;i++)
{
    if(nums[i]<min)
    {
        min=nums[i];
    }
    if(nums[i]>max)
    {

        max=nums[i];
    }
}
int gcd;
for(i=1;i<=min;i++)
{
    if(min%i==0 && max%i==0)
    {
        gcd=i;
    }
}

return gcd;
}