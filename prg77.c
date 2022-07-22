#include<stdio.h>
 
// int main()
// {
//    int n;
//    printf("Enter an integer\n");
//    scanf("%d",&n);
//    if ( n & 1 == 1 )
//       printf("Odd\n");
//    else
//       printf("Even\n");
//    return 0;
// }

// int main()
// {
//     int n;
//     printf("Enter an integer\n");
//     scanf("%d",&n);
//     if((n | 1) >n)
//     printf("Even\n");
//     else 
//     printf("Odd\n");
//     return 0;
// }

// int main(){
//     int num=15;
//     if((num/2)*2==num){
//         printf("Even");
//     }
//     else{
//         printf("Odd");
//     }
// }

int main()
{
    int n;
    printf("Enter a integer number for num: ");
    scanf("%d",&n);//takes input from the user
    //using shift operator
    if(((n>>1)<<1)==n)
    printf("%d is a Even number",n);
    else if(((n>>1)<<1)!=n)
    printf("%d is a Odd number",n);
    return 0;
}


// int main()
// {
//     int n;
//     printf("Enter a integer number for num: ");
//     scanf("%d",&n);
//     if ((n ^ 1) == n + 1)
//     printf("%d is a Even number",n);
//     else if(if ((n ^ 1) == n - 1))
//     printf("%d is a Odd number",n);
//     return 0;
// }
