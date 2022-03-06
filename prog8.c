//check whether a year is leap or not
#include<stdio.h>
int main(){
    int yr;
    printf("Enter a year:\n");
    scanf("%d", &yr);
    if(yr%100==0){
        if (yr%400==0)
        {
            printf("Leap year");
        }
        else{
            printf("Not a Leap year");
        }
    }
    else{
        if (yr%4==0)
        {
            printf("Leap year");
        }
        else{
            printf("Not a Leap year");
        }
    }
    return 0;
}