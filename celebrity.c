// The task is to complete this function
int getId(int M[MAX][MAX], int n)
{
    int i,j,id=-1,sum,flag;
    for(i=0;i<n;i++)
    {
        sum=0;
        flag=0;
        for(j=0;j<n;j++)
        {
            sum=sum+M[i][j];
            if(sum>0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            sum=0;
            for(j=0;j<n;j++)
                sum+=M[j][i];
            if(sum==n-1)
            {
                id=i;
                break;
            }
        }
    }
    return id;
}