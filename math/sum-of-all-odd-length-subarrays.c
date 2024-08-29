int sumOddLengthSubarrays(int* arr, int arrSize){
    int k,l,i,n,j,sum=0;
    k=1;l=0;
    while(k<=arrSize)
    {
        if(k%2!=0)
        {
            for(i=0;i<arrSize;i++)
            {
                n=1;
                j=i;
                while(n<=k && j<arrSize)
                {
                    sum=sum+arr[j];
                    n++;
                    j++;
                }
                if(j>=arrSize) break;
            }
        }
        l++;
        k=(2*l)+1;
    }
    return sum;
}
