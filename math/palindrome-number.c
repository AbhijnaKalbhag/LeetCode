bool isPalindrome(long long int x){
    if(x<0)
    {
        return 0;
    }
    if(x>=0 && x<10)
    {
        return 1;
    }
    long long int  temp,n=0,k;
    temp=x;
    while(temp>0)
    {
        k=temp%10;
        n=n*10+k;
        temp=temp/10;
    }
    if(n==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}