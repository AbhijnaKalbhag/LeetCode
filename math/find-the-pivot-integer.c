int pivotInteger(int n){
    if(n == 1){
        return 1;
    }
    int sum = n*(n+1)/2;  // Calculate the sum of all integers from 1 to n
    int sum2 = 0;
    for(int i = 1; i<=n; i++){
        sum2=sum2+i;
        if(sum2 == sum){
            return i;
        }
        
        sum=sum-i;
    }
    return -1;
}
