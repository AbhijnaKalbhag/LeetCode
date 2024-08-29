int lengthOfLastWord(char * s){
int i;
    char a[100000];
    int k=0;
    if(strlen(s)==1)
    {
        return 1;
    }
    for(i=strlen(s)-1;s[i]>=0;i--)
    {
        
        
        if(s[i]!=' ')
        {
         a[k]=s[i];
            k++;
            if(i==0)
            {
                break;
            }
            if(s[i-1]==' ')
            {
                
                break;
            }
             
        }
        else
        {
            continue;
        }
            
            
    
    }
    
    a[k]='\0';
    printf("%s\n",a);
    return strlen(a);

}