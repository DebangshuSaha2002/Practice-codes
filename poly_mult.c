#include<stdio.h>
#include<stdlib.h>

struct node
{
    int ex;
    int co;
    struct node * next;
};

void display(struct node * head);
struct node * create(struct node * head)
{
    struct node * new=NULL;
    struct node * ptr=NULL;
    new=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the Coefficient:");
    scanf("%d",&new->co);
    printf("\nEnter the Exponential:");
    scanf("%d",&new->ex);
    new->next=NULL;
    head=new;
    ptr=head;
    char ch;
    printf("\nDo you want to continue(y/n) : ");
    scanf(" %c",&ch);
    while(ch=='y')
    {
        new=(struct node *) malloc(sizeof(struct node));
        printf("\nEnter the Coefficient:");
        scanf("%d",&new->co);
        printf("\nEnter the Exponential:");
        scanf("%d",&new->ex);
        new->next=NULL;
        ptr->next=new;
        ptr=ptr->next;
        printf("\nDo you want to continue(y/n) : ");
        scanf(" %c",&ch);
    }
    display(head);
    return head;
}

struct node * insert(struct node * head,int ex,int co)
{
    struct node * ptr=NULL;
    struct node * new;
    new=(struct node *)malloc(sizeof(struct node));
    new->co=co;
    new->ex=ex;
    new->next=NULL;
    if(head==NULL)
    {
        head=new;
        new->next=NULL;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new;
        new->next=NULL;
    }
    return head;
}

struct node * remove_dup(struct node *head)
{
    struct node * ptr1=NULL;
    struct node * ptr2=NULL;
    struct node * dup=NULL;
    while(ptr1!=NULL && ptr1->next!=NULL)
    {
        ptr2=ptr1;
        while(ptr2->next!=NULL)
        {
            if(ptr1->ex == ptr2->next->ex)
            {
                ptr1->co=ptr1->co+ptr2->next->co;
                dup=ptr2->next;
                ptr1->next=ptr2->next->next;
                free(dup);
            }
            else
            {
                ptr2=ptr2->next;
            }
        }
        ptr1=ptr1->next;
    }
    return head;
}

struct node * poly_multiply(struct node * head1,struct node * head2)
{
    struct node * head3=NULL;
    struct node * ptr1,* ptr2=NULL;
    ptr1=head1;
    ptr2=head2;
    head3=NULL;
    while(ptr1!=NULL)
    {
        while(ptr2!=NULL)
        {
            head3=insert(head3,ptr1->ex+ptr2->ex,ptr1->co+ptr2->co);
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
    remove_dup(head3);
    display(head3);
    return head3;
}

void display(struct node * head)
{
    printf("\n\n");
    struct node * ptr=head;
    while(ptr->next!=NULL)
    {
        printf("%dx^%d + ",ptr->co,ptr->ex);
        ptr=ptr->next;
    }
    printf("%dx^%d",ptr->co,ptr->ex);
    ptr=ptr->next;
}

int main()
{
    struct node *head1,*head2,*head3=NULL;
    head1=create(head1);
    head2=create(head2);
    head3=poly_multiply(head1,head2);
    return 0;
}