int semiOrderedPermutation(int* nums, int numsSize){
int i,j,count=0,temp;
while(nums[0]!=1 || nums[numsSize-1]!=numsSize){
for(int i=0;i<numsSize;i++){
    if(nums[i]==1&& i!=0){
        temp=nums[i];
        nums[i]=nums[i-1];
        nums[i-1]=temp;
        count++;}
    if(nums[i]==numsSize && i!=numsSize-1){
         temp=nums[i];
        nums[i]=nums[i+1];
        nums[i+1]=temp;
        count++; }
    if(nums[0]==1 && nums[numsSize-1]==numsSize){
        break;
    }}
}
return count;
}