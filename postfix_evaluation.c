#include<stdio.h>
#include<string.h>
#include<ctype.h>

int stack[10];
int top=-1;

void push(char x)
{
    if(top==9)
    {
        printf("\nOverflow");
        return;
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

int pop()
{
    int data;
    if(top==-1)
    {
        printf("\nUnderflow");
        return 0;
    }
    else
    {
        data=stack[top];
        top--;
    }
    return data;
}

int main()
{
    char exp[10];
    int n1,n2,n3,n;
    printf("\nEnter the Postfix expression:");
    scanf("%s",exp);
    int l=strlen(exp);
    for(int i=0;i<l;i++)
    {
        if(isdigit(exp[i]))
        {
            n=exp[i]-'0';
            push(n);
        }
        else
        {
            n1=pop();
            n2=pop();
            if(exp[i]=='+')
            {
                n3=n2+n1;
                push(n3);
            }
            else if(exp[i]=='-')
            {
                n3=n2-n1;
                push(n3);
            }
            else if(exp[i]=='*')
            {
                n3=n2*n1;
                push(n3);
            }
            else if(exp[i]=='/')
            {
                n3=n2/n1;
                push(n3);
            }
            else if(exp[i]=='^')
            {
                n3=n2^n1;
                push(n3);
            }
        }
    }
    int x=pop();
    printf("\nThe value is %d",x);
    return 0;
}