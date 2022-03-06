//factorial using recursive function
#include<stdio.h>
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return(n*factorial(n-1));
    }
}
int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    int ans=factorial(num);
    printf("Factorial of %d is %d",num, ans);
    return 0;
}