#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
    struct node * prev;
}*head=NULL;

void display()
{
    struct node * ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

void reverse()
{
    struct node * ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    while(ptr!=head)
    {
        printf("%d ",ptr->data);
        ptr=ptr->prev;
    }
    printf("%d ",ptr->data);
}

void insert_first()
{
    struct node * new=(struct node * )malloc(sizeof(struct node));
    printf("\nEnter the data:");
    scanf("%d",&new->data);
    if(head==NULL)
    {
        head=new;
        new->next=NULL;
    }
    else
    {
        head->prev=new;
        new->next=head;
        head=new;
    }
    display();
}

void insert_last()
{
    struct node * new=(struct node *)malloc(sizeof(struct node));
    struct node * ptr=head;
    printf("\nEnter the data:");
    scanf("%d",&new->data);
    if(head==NULL)
    {
        head=new;
        new->next=NULL;
        new->prev=head;
    }
    else
    {
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new;
        new->prev=ptr;
        new->next=NULL;
    }
    display();
}

void insert_pos()
{
    int pos;
    int count=1;
    struct node * new=(struct node *)malloc(sizeof(struct node));
    struct node * ptr=head;
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    printf("\nEnter the data:");
    scanf("%d",&new->data);
    while(ptr!=NULL && count!=pos-1)
    {
        ptr=ptr->next;
        count++;
    }
    new->next=ptr->next;
    ptr->next->prev=new;
    ptr->next=new;
    new->prev=ptr;
    display();
    printf("\nPrinting in reverse:");
    reverse();
}

int main()
{
    insert_first();
    insert_first();
    insert_first();
    insert_first();
    insert_last();
    insert_last();
    insert_last();
    insert_pos();
    insert_pos();
    return 0;
}