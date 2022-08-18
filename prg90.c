/*WAP to find the largest number and counts the occurrence 
of the largest number in a dynamic array of n integers 
using a single loop.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,c=0;
    printf("Enter the number of value\n");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    printf("Enter %d values in the dynamic array\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    int largest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==largest)
        {
            c+=1;
        }
    }
    printf("The largest number in the array is : %d\n",largest);
    printf("The Freq of the largest number in the array is %d",c);
    return 0;
}