//add,multiply,divide and find average of two numbers
#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    int sum=a+b;
    int mult=a*b;
    int divide=a/b;
    int avg=(a+b)/2;
    printf("\n Sum of two numbers %d",sum);
    printf("\n Multiplication of two numbers %d",mult);
    printf("\n Division of two numbers %d",divide);
    printf("\n Average of two numbers %d",avg);
    return 0;
}