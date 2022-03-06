//find all divisors and sum of divisors of a number
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    int sum=0;
    printf("The positive divisor:\n");
    for(int i=1; i<n; i++){
        
        if(n%i==0){
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\nThe sum of the divisors is:%d", sum);
    return 0;
}