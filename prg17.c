#include<stdio.h>
void main()
{
    int arr[100],i,j,n,key;
    printf("This is bubble sort \n");
    printf("enter the size of an array:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
	    scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {   
	    for(j=0;j<n;j++)
        {
		    if(arr[j]>arr[j+1])
		    {
			    key=arr[j];
			    arr[j]=arr[j+1];
			    arr[j+1]=key;
		    }
	    }
    }
    printf("After sorting: \n");
    for(i=0;i<n;i++)
    {
	    printf("%d \t",arr[i]);
    }
    return 0;
} 