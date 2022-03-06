//reverse the digits of a number
#include<stdio.h>
int main(){
    int n,x;
    int r=0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    while (n>=1)
    {
        x=n%10;
        r=x+(r*10);
        n=n/10;
    }
    printf("reverse no:%d\n",r);
    
    return 0;
}