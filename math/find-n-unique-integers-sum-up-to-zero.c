/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize){

int *a,i;
a=malloc(n*sizeof(n));
    if(n%2==0){
        for( i=0;i<n-1;i++){
           if((i+1)%2!=0)
           {
         a[i]=i+1;
         a[i+1]=-(i+1);
           }
        }
    }
    else{
       for( i=0;i<n-2;i++){
           if((i+1)%2!=0)
           {
         a[i]=i+1;
         a[i+1]=-(i+1);
           }
        }
        a[n-1]=0;
         }
    *returnSize=n;
    return a;
      
}

