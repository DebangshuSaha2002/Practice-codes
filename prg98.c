//POSTFIX EVALUATION

#include<stdio.h>
#include<ctype.h>


int stack[10];
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
    char exp[100];
    char *e;
    int n,n1,n2,n3;
    printf("Enter the POSTFIX Expression: ");
    scanf("%s",exp);
    e=exp;
    printf("\n");

    while(*e!='\0')
    {
        if(isdigit(*e))
        {
            n=*e-48;
            push(n);
        }
        else
        {
            n1=pop();
            n2=pop();
            switch(*e)
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
                }
            }
            push(n3);
        }
        e++;
    }

    printf("The result of the exp %s is %d\n",exp,pop());
    return 0;
}