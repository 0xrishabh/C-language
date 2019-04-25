#include <stdio.h>
#include <stdlib.h>

int fact_memo[100];

int factorial(int n){
    int num = n;
    int fact=1;
    if (num < 2 && num > 0){return 1;}
    else{
            if(fact_memo[n] != 0){
                return fact_memo[num];
            }
            else{
                for(int i=2;i<=num;i++){
                    fact = i*fact;
                    fact_memo[i] = fact;
                }
            }
    }
    return fact_memo[num];
}

int main(){
    int n,r;
    double comb;

    printf("Enter N \n");
    scanf("%d",&n);

    printf("Enter R \n");
    scanf("%d",&r);

    /* printf("n=%d r=%d n-r=%d \n", factorial(n),factorial(r),factorial(n-r)); */

    comb = factorial(n)/(factorial(r)*factorial(n-r));
    printf("total combination = %lf",comb);

}
