int strStr(char * haystack, char * needle){

int m,n;
m=strlen(haystack);
n=strlen(needle);
printf("%d\n%d",m,n);
if(m<1||n<1)
{
    return -1;
}
/*if(m==1 && n==1)
{
    if(haystack[0]==needle[0])
    {
        return 0;
    }
}*/
int i,j;
for(i=0;i<m;i++)
{
      j=0;
      while(j<n && needle[j]==haystack[i+j])
      {
          j++;
      }
      if(j==n)
      {
          return i;
      }
}
return -1;
}