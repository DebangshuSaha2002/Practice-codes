#include<stdio.h>
int main()
{
    int n=6;
    int r=2;
    int a=5;
    int i;
    for(i=1;i<=n;i++)
    {
        printf(" %d ",a);
        a=a*r;
    }
}