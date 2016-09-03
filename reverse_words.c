#include <stdio.h>
#include<string.h>

int main() {
	int T,i,j,out_index,n,k,l;
	char arr[2000],out[2000],temp[200];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",arr);
        n=strlen(arr);
        out_index=n;
        for(i=0;i<n;i++)
        {
            j=0;
            while(arr[i]!='.' && i<n)
            {
                temp[j]=arr[i];
                i++;
                j++;
            }
            temp[j]='\0';
            k=out_index-j;
            l=0;
            while(temp[l]!='\0')
            {
                out[k]=temp[l];
                l++;
                k++;
            }
            out_index=k-j;
            if(i<n)
            {
                out[out_index-1]='.';
                out_index=out_index-1;
            }
        }
        out[n]='\0';
        printf("%s\n",out);
    }
	return 0;
}