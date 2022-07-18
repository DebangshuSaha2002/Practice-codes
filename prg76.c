#include<stdio.h>

struct employee
{
    char name[20];
    char designation[20];
    int salary;
}s[5];

int main()
{
    int i;
    //Accepting information
    printf("Enter details of 5 employees:\n");
    for(i=0;i<5;i++)
    {
        printf("Enter name :");
        scanf("%s", s[i].name);
        printf("Enter designation :");
        scanf("%s", s[i].designation);
        printf("Enter salary :");
        scanf("%d", &s[i].salary);
    }
    //displaying information
    printf("\nThe details of emplyoees are :\n");
    for(i=0;i<5;i++)
    {
        printf("%s\t%s\t%d", s[i].name, s[i].designation, s[i].salary);
    }
    return 0;
}