#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
void display(struct node * head);
void create(struct node * head,struct node * ptr,struct node * new)
{
    char ch;
    printf("Do you want to add more(y/n): ");
    scanf(" %c",&ch);
    while(ch=='y')
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data:");
        scanf("%d",&new->data);
        new->next=NULL;
        ptr->next=new;
        ptr=ptr->next;
        printf("Do you want to add more(y/n): ");
        scanf(" %c",&ch);
    }
}

void display(struct node * head)
{
    struct node * ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

// void swap_nodes(struct node * head)
// {
//     int p1,p2;
//     printf("\nEnter the position that u want to swap: ");
//     scanf("%d %d",&p1,&p2);
//     int count=1;
//     struct node * ptr1,*ptr2,*ptr3,*ptr4,*ptr5,*ptr6;
//     ptr1=head;
//     while(ptr1!=NULL)
//     {
//         if(count==p1-1)
//         {
//             ptr2=ptr1;
//             ptr3=ptr1->next;
//         }
//         else  if(count==p2-1)
//         {
//             ptr4=ptr1;
//             ptr5=ptr4->next;
//             ptr6=ptr4->next->next;
//         }
//         ptr1=ptr1->next;
//         count++;
//     }
//     ptr2->next=ptr5;
//     ptr5->next=ptr4;
//     ptr4->next=ptr3;
//     ptr3->next=ptr6;
//     display(head);
// }

void swap_node_data(struct node * head)
{
    int pos1,pos2;
    printf("Enter the positions u want to swap the data: ");
    scanf("%d %d",&pos1,&pos2);
    int count=1;
    struct node *ptr,* ptr1,*ptr2;
    ptr=head;
    while(ptr!=NULL)
    {
        if(count==pos1)
        {
            ptr1=ptr;
        }
    
        if(count==pos2)
        {   
            ptr2=ptr;
        }
        ptr=ptr->next;
        count++;
    }
    struct node * temp=(struct node *)malloc(sizeof(struct node));
    temp->data=ptr1->data;
    ptr1->data=ptr2->data;
    ptr2->data=temp->data;
    display(head);
}

int main()
{
    struct node * head=NULL;
    struct node * ptr=NULL;
    struct node * new=NULL;
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&new->data);
    new->next=NULL;
    head=new;
    ptr=head;
    create(head,ptr,new);
    display(head);
    swap_node_data(head);
    return 0;
}