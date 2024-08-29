int differenceOfSum(int* nums, int numsSize){
int sum1=0,sum2=0,temp1,k,i=0;
while(i<numsSize)
{
    sum1=sum1+nums[i];
    temp1=nums[i];
    while(temp1>0)
    {
        sum2=sum2+(temp1%10);
        temp1=temp1/10;
    }
    i++;
}
return abs(sum1-sum2);
}