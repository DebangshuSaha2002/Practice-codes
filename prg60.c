#include<stdio.h>
int main()
{
    int n=9;
    int x=n/2+1;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==x || j==n-x+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        if(i<=n/2)
        x--;
        else
        x++;
        printf("\n");
    }
}