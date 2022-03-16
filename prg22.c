#include <stdio.h>

int factorial(int Number)
{
  if (Number == 0 || Number == 1)
    return 1;
  else
    return Number * factorial (Number -1);
}

int main()
{
    int n, r, ncrResult;
    
    printf("Enter the Number  = ");
    scanf("%d",&n);

    printf("Enter the r Value = ");
    scanf("%d",&r);

    ncrResult = factorial(n)/ (factorial(r) * factorial(n - r));

    printf("The Final Result of nCr = %d\n", ncrResult);
    
    return 0;
}