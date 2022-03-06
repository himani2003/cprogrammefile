//check whether a given no is palindrome or not
#include<stdio.h>
int main(){
    int n,x;
    int r=0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    int temp=n;
    while(temp>0){
        x=temp%10;
        r=x+(r*10);
        temp=temp/10;
    }
    if (r==n)
    {
        printf("It is pallindrome");
    }
    else{
        printf("It is not a pallindrome");
    }
    
    return 0;
}