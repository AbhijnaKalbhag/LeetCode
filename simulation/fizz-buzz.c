/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include<string.h>
 
char ** fizzBuzz(int n, int* returnSize){
*returnSize=n;
char **a,s[10];
int i;
a=malloc(n*sizeof(char*));
for(i=0;i<n;i++){
     a[i] = malloc(10 * sizeof(char)); 
    if((i+1)%3==0 &&(i+1)%5==0)
    {
        strcpy(a[i],"FizzBuzz");
    }
    else if((i+1)%3==0)
    {
        strcpy(a[i],"Fizz");
    }
    else if((i+1)%5==0)
    {
        strcpy(a[i],"Buzz");
    }
    else
    {
    sprintf(a[i],"%d",i+1);
    }
}
return a;

}