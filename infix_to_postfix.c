//Infix to postfix

#include<stdio.h>
#include<stdlib.h>
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

char pop()
{
    char data;
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

int priority(char x)
{
    if(x=='(')
    {
        return 1;
    }
    else if(x=='+' || x=='-')
    {
        return 2;
    }
    else if(x=='*' || x=='/')
    {
        return 3;
    }
    else if(x=='^')
    {
        return 4;
    }
    return 0;
}

int main()
{
    char exp[10];
    char x;
    printf("\nEnter the expression: ");
    scanf("%s",exp);
    int l=strlen(exp);
    for(int i=0;i<l;i++)
    {
        if(isalnum(exp[i]))
        {
            printf("%c ",exp[i]);
        }
        else if(exp[i]=='(')
        {
            push(exp[i]);
        }
        else if(exp[i]==')')
        {
            while((x=pop())!='(')
            {
                printf("%c ",x);
            }
        }
        else 
        {
            while(priority(stack[top])>=priority(exp[i]))
            {
                printf("%c ",pop());
            }
            push(exp[i]);
        }
    }
    while(top!=-1)
    {
        printf("%c ",pop());
    }
    return 0;
}