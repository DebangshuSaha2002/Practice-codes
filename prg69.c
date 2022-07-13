#include<stdio.h>
int main()
{
    int prno,i,n,flg;
    printf("Enter a number \n");
    scanf("%d ",&prno);
    for(i=1;i<=prno;i++)
    {
        if(i*(i+1)==prno)
        {
            flg=1;
            break;
        }
    }
    if(flg==1)
    {
        printf("The given number is a pronic number ");
    }
    else
        printf("The given number is a pronic number");
    return 0;
}