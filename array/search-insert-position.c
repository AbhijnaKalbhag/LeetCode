int searchInsert(int* nums, int numsSize, int target){
    int i,k=0;
    if(target<nums[0])
    {
        return 0;
    }
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
        {
            return i;
        }
        if(target<nums[i]&&target>nums[i-1])
        {
        
            k=i;
        }
        else if(target>nums[numsSize-1])
        {
            return numsSize;
        }
    }
    
    return k;

}