#include<stdio.h>
int main()
{
int i,j;
int  no,abc;
char last;
 printf("Enter The Value 30 For Perfact Chrismas Treen\n\n ");
 scanf("%d",&no);
 printf("\n");
 do//Do-While Loop Start From Here
  { 
  abc=no/4;
  for(i=1; i<=no/4; i++)
   {
   printf("\t\t  ");
   for(j=1; j<abc; j++)
    printf(" ");
    abc--;
     for(j=1; j<=2*i-1; j++)
      printf("*");
       printf("\n");
 }

 abc=no/3;
 for(i=3; i<=no/3; i++)
  {
  printf("\t     ");
   for(j=1; j<abc; j++)
    printf(" ");
    abc--;
     for(j=1; j<=2*i-1; j++)
      printf("*");
      printf("\n");
  }

 abc=no/2;
 for(i=4; i<=no/2; i++)
  {
  printf("\t");
   for(j=1; j<abc; j++)
    printf(" ");
    abc--;
     for(j=1; j<=2*i-1; j++)
      printf("*");//Enter The AnyThing In Place Of ( * ) Like Any Key For Change Pattern
      printf("\n");
  }

 for(i=0;i<no/3;i++)
  {
  printf("\t\t      ");//Extra Space For Maintain Tree 
  printf("*****");//Enter The AnyThing In Place Of ( * ) Like Any Key For Change Pattern
  printf("\n");
  }
  
  printf("\t\t  *************");//Enter The AnyThing In Place Of ( * ) Like Any Key For Change Pattern
  printf("\nPress Y Or y Number For Again Print Tree N Or Other Key For Exit :");
  scanf("%c",&last);
 }
 while(last=='Y'||last=='y');
 return 0;
}