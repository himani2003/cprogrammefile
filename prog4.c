//find area and circumference of a circle
#include<stdio.h>
int main(){
    float r;
    printf("Enter radius of a circle:\n");
    scanf("%f", &r);
    float circum=2*3.14*r;
    float area=3.14*r*r;
    printf("Circumference:%f\n", circum);
    printf("Area:%f\n", area);
    return 0;
}