#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char data;
    struct node *next;
}*top;

void push(char c)
{
    struct node * new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=c;
    if(top==NULL)
    {
        new->next=NULL;
    }
    else
    {
        new->next=top;
    }
    top=new;
}

void pop()
{
    struct node * temp=top;
    if(top==NULL)
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else
    {
        top=top->next;
        printf("%s ",&temp->data);
        free(temp);
    }
}

int main()
{
    char name[]="Debangshu";
    // printf("Enter your name: ");
    // scanf("%c",name);
    int len=strlen(name);
    for(int i=0;i<len;i++)
    {
        push(name[i]);
    }
    //POP
    for(int i=0;i<len;i++)
    {
        pop();
    }
    return 0;
}