#include<stdio.h>
int main()
{
    int n=7;
    int d=3;
    int a=1;
    int i;
    for(i=1;i<=n;i++)
    {
        printf(" %d ",a);
        a=a+d;
    }
    return 0;
}