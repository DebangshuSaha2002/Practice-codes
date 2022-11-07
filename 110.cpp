/*(a)Write a program in C++ for a
dynamically given array with both
positive and negative numbers.
We need to find the two elements
such that their sum is closest to
zero. For Example the array below
designed function should give -80
and 85.
1, 60, -10, 70, -80, 85.*/


# include <iostream>
# include <stdlib.h> /* for abs() */ 
# include <math.h> 
  
using namespace std; 
void minAbsSumPair(int arr[], int arr_size) 
{ 
    int min_sum=arr[0]+arr[1];
    int min_r=1;
    int min_l=0;
    int sum;
    for(int i=0;i<arr_size-1;i++)
    {
        for(int j=i+1;j<arr_size;j++)
        {
            sum=arr[i]+arr[j];
            if(abs(sum)<abs(min_sum))
            {
                min_sum=sum;
                min_r=i;
                min_l=j;
            }
        }
    } 
    cout<<"The minimum elements are "<<arr[min_r]<<" and "<<arr[min_l]<<endl;
} 
  
// Driver Code 
int main() 
{ 
    int arr[] = {1, 60, -10, 70, 10, -80, 85}; 
    minAbsSumPair(arr, 7); 
    return 0; 
} 