/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int n = 0;
    int *a= malloc((right - left + 1) * sizeof(int));
    if (a == NULL) {
        return NULL; // failed to allocate memory
    }
    int temp,k,flag;
    for(int i=left;i<=right;i++)
{
    temp=i;
    flag=1;
    while(temp>0)
    {
        k=temp%10;
        if(k==0)
        {
            flag=0;
            break;
        }
        if(i%k!=0)
        {
            flag=0;
            break;
        }
        temp=temp/10;
    }
    if(flag==1){
        a[n]=i;
        n++;
    }
}
    *returnSize = n;
    return a;
}
