#include<stdio.h>
struct student{
    char name[20];
    int roll;
    int marks;
    char address[30];
};
int main()
{
    struct student s[5];
    int i,j;
    for(i=0;i<5;i++)
    {
        printf("Enter the students name\n");
        scanf("%s",s[i].name);
        printf("Enter the students roll number\n");
        scanf("%d",&s[i].roll);
        printf("Enter te students marks\n");
        scanf("%d",&s[i].marks);
        printf("Enter the students address\n");
        scanf("%s",s[i].address);
    }
    printf("\nDisplaying the Details of the students\n");
    for(j=0;j<5;j++)
    {
        printf("%s\t%d\t%d\t%s\n",s[j].name,s[j].roll,s[j].marks,s[j].address);
    }
    return 0;
}