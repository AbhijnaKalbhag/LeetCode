/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize){
 int *ptr=malloc(numsSize*sizeof(int));
 *returnSize=numsSize;
 for(int i=0;i<numsSize;i++)
 {
     ptr[i]=nums[nums[i]];
 }
 return ptr;

}