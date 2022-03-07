//HCF
#include<stdio.h>
int main()
{
        int hcf(int,int);
        int n1,n2,n3,hcf1,hcf2; //Input for 3 numbers
        printf("\nEnter 1st positive integer :: ");
        scanf("%d",&n1);
        printf("\nEnter 2nd positive integer :: ");
        scanf("%d",&n2);
        printf("\nEnter 3rd positive integer :: ");
        scanf("%d",&n3);

        if(n1==0 && n2==0 && n3==0) //check for the numbers to be 0
        {
                printf("\nInvalid number");
        }

        hcf1=hcf(n1,n2); //function call
        hcf2=hcf(n3,hcf1);

        printf("\nHCF of [ %d, %d, %d ] is : [ %d ]\n",n1,n2,n3,hcf2);

        return 0;
}
int hcf(int m,int n) 
{
        int rem;
        while(n!=0) //if the number is not equal to 0
        {
                rem=m%n;
                m=n;
                n=rem;
        }
        return(m);
}
