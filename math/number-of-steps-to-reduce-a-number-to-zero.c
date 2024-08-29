int numberOfSteps(int num){

int temp,n=0,e;
temp=num;
while(temp!=0)
{
   if(temp%2==0)
   {
       temp=temp/2;
   }
   else
   {
       temp=temp-1;
   }
   n++;
}
return n;
}