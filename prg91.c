/*You are given an array of 0 s and 1 s in random order. 
Segregate 0 s on left side and 1 s on right side of the array. Traverse array only once.*/
#include<stdio.h>
  
void segZeroAndOne(int arr1[], int n) 
{ 
    int ctr = 0; 
  
    for (int i = 0; i < n; i++) { 
        if (arr1[i] == 0) 
            ctr++; 
    } 
    for (int i = 0; i < ctr; i++) 
        arr1[i] = 0; 
  
    for (int i = ctr; i < n; i++) 
        arr1[i] = 1; 
} 
void printSegre(int arr1[], int n) 
{ 
    printf("The array after segregation is: "); 
    for (int i = 0; i < n; i++) 
        printf("%d  ",arr1[i]); 
} 
int main()
{
    int n,c=0;
    printf("Enter the number of value\n");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter %d 0s and 1s in the array\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    segZeroAndOne(arr1,n);
    printSegre(arr1,n);
    return 0;
}

    