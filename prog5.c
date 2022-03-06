//simple interest
#include<stdio.h>
int main(){
    int p,y;
    float r;
    printf("Enter amount:\n");
    scanf("%d", &p);
    printf("Enter year:\n");
    scanf("%d", &y);
    printf("Enter rate of interest:\n");
    scanf("%f", &r);
    float si=p*y*r/100;
    printf("Simple interest:%f\n",si);
    return 0;
}