//Circular linked list

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
}*head=NULL;

void display();

void insert_first()
{
    char ch;
    struct node * new=NULL;
    new=(struct node *)malloc(sizeof(struct node));
    struct node * ptr=head;
    printf("\nEnter the data:");
    scanf("%d",&new->data);
    if(head==NULL)
    {
        head=new;
        new->next=head;
    }
    else
    {
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        ptr->next=new;
        new->next=head;
        head=new;
    }
    display();
}

void insert_last()
{
    struct node * ptr=head;
    struct node * new=(struct node * )malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&new->data);
    if(head==NULL)
    {
        head=new;
        new->next=head;
    }
    else
    {
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        ptr->next=new;
        ptr=new;
        new->next=head;
    }
    display();
}

void insert_pos()
{
    int pos;
    int count=1;
    struct node * new=(struct node *)malloc(sizeof(struct node));
    struct node * ptr=head;
    printf("\nEnter the position :");
    scanf("%d",&pos);
    printf("\nEnter the data : ");
    scanf("%d",&new->data);
    while(ptr!=head && count!=pos-1)
    {
        ptr=ptr->next;
        count++;
    }
    new->next=ptr->next;
    ptr->next=new;
}

void del_first()
{
    struct node * temp=NULL;
    if(head==NULL)
    {
        printf("Nothing to delete\n");
        return;
    }
    else
    {
        head=head->next;
        struct node * p=head;
        while(p->next!=head)
        {
            p=p->next;
        }
        p->next=head;
    }
    display();
}

void del_last()
{
    struct node * ptr=head;
    struct node * temp=NULL;
    while((ptr->next)->next!=head)
    {
        ptr=ptr->next;
    }
    temp=ptr->next;
    ptr->next=head;
    display();
}

void del_at_pos()
{
    struct node * ptr=head;
    struct node * temp=NULL;
    int pos;
    int count=1;
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    while(ptr->next!=head && count!=pos-1)
    {
        ptr=ptr->next;
        count++;
    }
    temp=ptr->next;
    ptr->next=temp->next;
    display();
}

void display()
{
    struct node * ptr=head;
    do
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);
    printf("\n");
}

int main()
{
    insert_first();
    insert_first();
    insert_first();
    insert_first();
    insert_first();
    insert_last();
    insert_last();
    insert_last();
    insert_pos();
    insert_pos();
    del_first();
    del_last();
    del_at_pos();
    return 0;
}

