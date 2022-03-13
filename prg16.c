//C Program to find highest frequency element in array
#include<stdio.h>
int main()
{
    int size,i,j,count=0,maxCount=0,maxElement,occurrence;
    printf("Enter the number of elements \n");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        printf("Give the value for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        count=1;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]==arr[i])
            {
                count++;
                if(count>maxCount)
                {
                    maxElement=arr[j];
                    maxCount=count;
                }
            }
        }
    }
    printf("Maximum Frequency Element : %d, Occureence = %d times",maxElement,maxCount);
    return 0;
}