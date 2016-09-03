#include <stdio.h>

int main() {
	int T,mid,end,beg,i,n,min,first_min,second_min;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d",&n);
	    int arr[n];
	    for(i=0;i<n;i++)
	        scanf("%d",&arr[i]);
	    beg=0;
	    end=n-1;
	    mid=(beg+end) / 2;
	    while(1)
	    {
	        mid=(beg+end) / 2;
	        //printf("\nbeg=%d mid=%d end=%d",beg,mid,end);
	        if(mid==beg)
	        {
	            if(mid+1<n)
	            {
    	            if(arr[mid+1]>arr[mid])
    	                min=arr[mid];
    	            else
    	                min=arr[mid+1];
	            }
	            else
	            {
	                if(arr[mid-1]>arr[mid])
    	                min=arr[mid];
    	            else
    	                min=arr[mid-1];
	            }
	            printf("%d\n",min);
	            break;
	        }
	        if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1])
	        {
	            printf("%d\n",arr[mid]);
	            break;
	        }
	        else 
	        {
	            if(arr[mid-1]<arr[beg])
	                first_min=arr[mid-1];
	            else
	                first_min=arr[beg];
	            if(arr[mid+1]<arr[end])
	                second_min=arr[mid+1];
	            else
	                second_min=arr[end];
	                
	            if(first_min < second_min)
	                end=mid-1;
	            else
	                beg=mid+1;
	        }
	    }
	}
	return 0;
}