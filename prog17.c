//print pallindrome numbers in the given range
#include<stdio.h>
int main(){
    int n1, n2;
    printf("Enter two numbers:\n");
    scanf("%d%d", &n1, &n2);
    printf("Pallindrome numbers are:\n");
    int count=0;
    for(int i=n1; i<=n2; i++){
        int temp=i;
        int newi=0;
        while(temp!=0){
            int rem=temp%10;
            newi=rem+(newi*10);
            temp=temp/10;
        }
        if(newi==i){
            printf("%d ", i);
            count++;
        }
    }
    int num[count];
    for(int x=0; x<=count-1; x++){
        num[x]=i;
        }
    return 0;
}