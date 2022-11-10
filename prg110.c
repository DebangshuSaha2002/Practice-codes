#include<stdio.h>
#include<stdlib.h>

int s1[20];
int s2[20];
int top1=-1;
int top2=-1;

void push1(int x)
{
    s1[++top1]=x;
}

int pop1()
{
    if(top1==-1)
    {
        printf("UNDERFLOW");
        return 0;
    }
    else
    {
        return s1[top1--];
    }
}

void push2(int x)
{
    s2[++top2]=x;
}

int pop2()
{
    if(top2==-1)
    {
        printf("\nUNDERFLOW\n");
        return 0;
    }
    else
    {
        return s2[top2--];
    }
}

void enqueue()
{
    int num;
    printf("\nEnter the value:");
    scanf("%d",&num);
    push1(num);
    for(int i=0;i<=top1;i++)
    {
        push2(pop1());
    }
}

void dequeue()
{
    int data=pop2();
    printf("\nThe popped element is %d",data);
    printf("\n");
}

void display()
{
    for(int i=0;i<=top2;i++)
    {
        printf("%d ",s2[i]);
    }
    printf("\n");
}
int main()
{
    char ch;
    printf("\nEnter y to add elements to stack:");
    scanf(" %c",&ch);
    while(ch=='y')
    {
        enqueue();
        printf("\nEnter y to add elements to stack:");
        scanf(" %c",&ch);
    }
    display();

    printf("Dequeing from the queue:");
    dequeue();
    display();
    printf("\nEnter y to add elements to stack:");
    scanf(" %c",&ch);
    while(ch=='y')
    {
        enqueue();
        printf("\nEnter y to add elements to stack:");
        scanf(" %c",&ch);
    }
    display();

    printf("Dequeing from the queue:");
    dequeue();
    dequeue();
    display();

    return 0;
}
