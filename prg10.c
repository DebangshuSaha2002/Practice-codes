#include<stdio.h>
int main()
{
    int num=0;
    int s=0;
    printf("Enter the number \n");
    scanf("%d ",&num);
    int i=0;
    for(i=0;i<num;i++)
    {
        if(num%i==0)
        {
            s=s+i;
        }
    }
    if(s==num)
    {
        printf("%d is a perfect number ",num);
    }
    else
    {
        printf("%d is not a perfect number ",num);
    }
}