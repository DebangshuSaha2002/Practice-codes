//Special Number
#include<stdio.h>
int main()
{
    int num;
    int number;
    int i=0;
    int n=0;
    int fact=1;
    int sum=0;
    num=number;
    printf("Enter a number \n" );
    scanf("%d ",&num);
    while(number>0)
    {
        n=number%10;
        for(i=0;i<=n;i++)
        {
            fact=i*fact;
        }
        sum=sum+fact;
        number=number/10;
    }
    if(num==sum)
    {
        printf("%d is a special Number ",num);
    }
    else
    {
        printf("%d is not a special Number ",num);
    }
}
