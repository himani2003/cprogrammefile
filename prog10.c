//calculate the factorial of a number
#include<stdio.h>
int main(){
    int n;
    int ans=1;
    printf("Enter a no:\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        ans=ans*i;
    }
    printf("Factorial is:%d", ans);
    return 0;

}