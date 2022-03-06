// print n natural numbers
#include<stdio.h>
int main(){
    int n;
    printf("Enter a no:\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("%d\n", i);
    }
    return 0;
}