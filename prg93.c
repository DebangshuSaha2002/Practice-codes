//Swapping using call by value

// #include<stdio.h>

// void callvalue(int a,int b)
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;
//     printf("x = %d \ny = %d\n",a,b);
// }

// int main()
// {
//     int x=10;
//     int y=20;
//     callvalue(x,y);
//     return 0;
// }

//swapping using call my reference

#include<stdio.h>
#include<stdlib.h>

void call_ref(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("x=%d\ny=%d\n",*x,*y);
}

int main()
{
    int x=10;
    int y=20;
    call_ref(&x,&y);
    return 0;
}