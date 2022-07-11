#include<stdio.h>
int main()
{
    int m=5;
    int z=1;
    int i,j,k;
    for(i=1;i<=m;i++)
    {
        for(j=m-1;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=z;k++)
        {
            printf("%d",k);
        }
        z+=2;
        printf("\n");
    }
    return 0;
}