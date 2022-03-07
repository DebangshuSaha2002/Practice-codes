#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int guess;
    int nguesses=1;
    int n=rand()%100 + 1;  //Generates random number between 1 and 100
    srand(time(0));
    //printf("The original number is %d \n",n);
    //Keep running the loop until the number is guessed
    do{
        printf("Guess a number between 1 and 100\n");
        scanf("%d",&guess);
        if(guess>n)
        {
            printf("Lower number please\n");
        }
        else if(guess<n)
        {
            printf("Higher Number Please!\n");
        }
        else if(guess>n){
            printf("Lower Number please");
        }
        else{
            printf("You guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=n);
    return 0;
}
