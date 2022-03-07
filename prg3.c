#include<stdio.h>
int main()
{
    int arr[5];
    int B=0;
    int C=0;
    int D=0;
    while(B<5)
    {
        printf("Enter 5 integer values ");
        scanf("%d",&arr[B]);
        B=B+1;
    }
    //Displaying elements of an array
    printf("Elements of original array:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    //Sorting
    for (int i = 0; i < 5; i++) 
    {     
        for (int j = i+1; j < 5; j++) 
        {     
           if(arr[i] > arr[j]) 
           {    
               D = arr[i];    
               arr[i] = arr[j];    
               arr[j] = D;
           }  
        }
    }
printf("\n");
//Display
printf("The sorted array are \n");
for(int i=0;i<5;i++)
{
    printf("%d ",arr[i]);
}
return 0;
}