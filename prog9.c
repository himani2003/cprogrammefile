//check whether a triangle is valid or not
#include<stdio.h>
int main(){
    int side1,side2,side3,lside,sum;
    printf("Enter three sides of a triangle:\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1>side2){
        if(side1>side3){
            sum=side2+side3;
            lside=side1;
        }
        else{
            sum=side1+side2;
            lside=side3;
        }
    }
    else{
        if(side2>side3){
            sum=side1+side3;
            lside=side2;
        }
        else{
            sum=side1+side2;
            lside=side3;
        }
    }
    if(sum>lside){
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is not valid");
    }
    return 0;
}