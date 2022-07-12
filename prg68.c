#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    double x;
    printf("Enter a number \n");
    scanf("%d",&num);
    x=sqrt(num+1);
    if((int)x==x)
    {
        printf("%d is a sunny number ",num);
    }
    else
    printf("%d is not a sunny number ",num);
    return 0;
}