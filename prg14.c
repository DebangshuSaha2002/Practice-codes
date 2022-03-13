#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int j=2; j <= n; j++) {     // for each j in 2..n,

        int t=0;
        for(int i=1; i<=j; i++) {   // count j's divisors
            if(j%i==0) {            //   among 1..j
                t++;
            }
        }

        if( t==2 ){                 // if j is prime:   NB!
            int c=0, nn=n;
            while( nn%j==0 ) {      //   count multiplicity of j 
                c++;                //   as divisor of n, and
                nn /= j;
            }
            if( c!=0 ){             //   report a prime divisor and 
                printf(" %d  %d \n", j, c);   // its multiplicity
            }
        }
     }
     return 0;
}
