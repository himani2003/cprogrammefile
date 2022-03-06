//prime num betwwn 1 to n
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("prime no.s are:\n");
    for(int i=1; i<=n; i++){
        int count=0;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0){
            printf("%d ",i);
        }
    }
    return 0;
}