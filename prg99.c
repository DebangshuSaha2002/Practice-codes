//POstfix evaluation using for loop

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int stack[20];
int top=-1;

void push(int x)
{
    stack[++top]=x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char exp[20];
    int n,n1,n2,n3;
    printf("Enter the postfix expression: ");
    scanf("%s",exp);
    int len=strlen(exp);
    int i=0;
    while(exp[i]!='\0')
    {
        if(isdigit(exp[i]))
        {
            n=exp[i]-48;
            push(n);
        }
        else
        {
            n1=pop();
            n2=pop();
            switch(exp[i])
            {
                case '+':
                {
                    n3=n2+n1;
                    break;
                }
                case '-':
                {
                    n3=n2-n1;
                    break;
                }
                case '*':
                {
                    n3=n2*n1;
                    break;
                }
                case '/':
                {
                    n3=n2/n1;
                    break;
                }
                case '^':
                {
                    n3=n2^n1;
                    break;
                }
            }
            push(n3);
        }
        i++;
    }
    printf("The result of the exp %s is %d\n",exp,pop());
    return 0;
}