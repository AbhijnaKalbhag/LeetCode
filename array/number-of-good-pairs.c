int numIdenticalPairs(int* nums, int numsSize){
int i,j,n=0;
if(numsSize==1)
{
    return 0;
}
for(i=0;i<numsSize-1;i++)
{
    for(j=i+1;j<numsSize;j++)
    {
       if(i<j && nums[i]==nums[j])
       {
           n++;
       }
    }
}
return n;
}