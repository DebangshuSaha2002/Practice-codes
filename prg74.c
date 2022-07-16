#include<stdio.h>
int main()
{
    int asize,bsize,msize,i,j;
    int a[10],b[10],m[20];
    printf("Enter the first array size \n");
    scanf("%d",&asize);
    printf("Enter the first array elements \n");
    for(i=0;i<asize;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the second array size \n");
    scanf("%d",&bsize);
    printf("Enter the second array elements \n");
    for(i=0;i<bsize;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<asize;i++)
    {
        m[i]=a[i];
    }
    msize=asize+bsize;
    for(i=0,j=asize;j<msize && i<bsize;i++,j++)
    {
        m[j]=b[i];
    }
    printf("\na[%d] Array elements after merging \n",msize);
    for(i=0;i<msize;i++)
    {
        printf("%d \n",m[i]);
    }
    return 0;
}