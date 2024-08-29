bool isValid(char * s)
{
char a[10000];
int top=-1;
int len;
 len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
                    top++;
                    a[top]=s[i];
        }
        else if(s[i]==')'||s[i]=='}'||s[i]==']')
        {
           if(top==-1)
           {
               return 0;
           }
           else
           {
               char c,b;
              c=a[top];
              top--;
              b=s[i];
               int k;
                
                 if(c=='('&&b==')')
                 {
                    k=0;
                   }
                else if(c=='{'&&b=='}')
                 {
                    k= 0;
                 }
                else if(c=='['&&b==']')
                {
                  k=0;
                }
               else
                {
                 k=1;
                 }

               if(k==1)
               {
                   return 0;
               }
           }
        }
    }
    if(top==-1)
    {
        return 1;
    }
    else return 0;
}
