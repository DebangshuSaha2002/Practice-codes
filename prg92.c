/*dealing with bitwise operators*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

void calculation(n,k)
{
    int and;
    int or;
    int xor;
    int a=0,b=0,c=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            and=i&j;
            or=i|j;
            xor=i^j;
            if(and<k)
            {
                if(a<and)
                {
                    a=and;
                }
            }
            if(or<k)
            {
                if(b<or)
                {
                    b=or;
                }
            }
            if(xor<k)
            {
                if(c<xor)
                {
                    c=xor;
                }
            }
        }
    }
    printf("%d\n%d\n%d",a,b,c);
    }
int main()

{
    int n,k;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of k: ");
    scanf("%d",&k);
    calculation(n,k);
    return 0;
}