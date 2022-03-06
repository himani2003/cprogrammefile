//convert temp. From celsius to fahrenheit
#include<stdio.h>
int main(){
    int n;
    printf("Enter temp in celcius:\n");
    scanf("%d", &n);
    float f;
    f=(1.8*n)+32;
    printf("Temp in fahrenheit:%f", f);
    return 0;
}