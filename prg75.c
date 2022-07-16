#include<stdio.h>
int main()
{
    int arr[100];
    int a,i;
    int asize;
    printf("Enter the number of elements for the array \n");
    scanf("%d ",&asize);
    printf("Enter the elements for the array \n");
    for(i=0;i<asize;i++)
    scanf("%d ",&arr[i]);
    printf("Enter the location where you want to delete an element \n");
    scanf("%d ",&a);
    if(a>=asize+1)
    {
        printf("Deletion is not possible");
    }
    else
    {
        for(i=a-1;i<asize-1;i++)
        arr[i]=arr[i+1];
        printf("Resusltant array \n");
        for(i=0;i<asize-1;i++)
        printf("%d \n",arr[i]);
    }
    return 0;
}