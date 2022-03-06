#include<stdio.h>
int main() 
{
    int add_array (int *a, int num_elements);
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Total summation is %d\n", add_array(arr, 5)); 
    return 0;
}
int add_array (int *p, int size) 
{
    int total = 0;
    int k;
    for (k = 0; k < size; k++) 
    {
        total += p[k];  
    }
    return (total);
}

