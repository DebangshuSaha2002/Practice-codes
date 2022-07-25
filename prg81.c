#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[20];
    int roll;
    int marks;
    char address[30];
};
int func1()
{
    struct student *s;
    int n;
    int i,j;
    s=(struct student*)malloc(n*sizeof(struct student));
    printf("Enter %d students data\n",n);
    for(i=0;i<n;i++)
    {
        printf("Enter the students name\n");
        scanf("%s",(s+i)->name);
        printf("Enter the students roll number\n");
        scanf("%d",&(s+i)->roll);
        printf("Enter te students marks\n");
        scanf("%d",&(s+i)->marks);
        printf("Enter the students address\n");
        scanf("%s",(s+i)->address);
    }
    return &s;
}
void display()
{
    func1();
    struct student *s;
    int j;
    for(j=0;j<5;j++)
    {
        printf("%s\t%d\t%d\t%s\n",(s+j)->name,(s+j)->roll,(s+j)->marks,(s+j)->address);
    }
}
int main()
{

    display();
}
