/*You are required to complete the function*/
long long int findMaxProduct(int A[], int n, int k)
{
    long long int max=1,prod;
    int i,j;
    for(i=0;i<n;i++)
    {
        if((i+k-1)<n)
        {
            prod=1;
            for(j=i;j<i+k;j++)
                prod=prod*A[j];
            if(max<prod)
                max=prod;
        }
    }
    return max;
}