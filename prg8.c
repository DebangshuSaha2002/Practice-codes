#include<stdio.h>
int main()
{
    int arrayeven(int [],int);
    int arrayodd(int [],int);
    int arraysum(int [],int);
    int A[8];
    int B,E,O,S;
    B=0;
    printf("Enter 8 values for A[8] \n");
    while(B<8)
    {
        scanf("%d",&A[B]);
        B=B+1;
    }
    E=arrayeven(A,8);
    O=arrayodd(A,8);
    S=arraysum(A,8);
    printf("The total number of even integers in the array is : %d \n",E);
    printf("The total number of odd integers in the array is : %d \n",O);
    printf("The sum of all the integers in the array is : %d \n",S);
}
int arrayeven(int x[],int y)
{
    int m=0;
    int p=0;
    for(m=0;m<8;m++)
    {
        if(x[m]%2==0)
        {
            p=p+1;
        }
    }
    return p;
}
int arrayodd(int x[],int y)
{
    int m=0;
    int q=0;
    for(m=0;m<8;m++)
    {
        if(x[m]%2!=0)
        {
            q=q+1;
        }
    }
    return q;
}
int arraysum(int x[],int y)
{
    int m=0;
    int s=0;
    for(m=0;m<8;m++)
    {
        s=s+x[m];
    }
    return s;
}
