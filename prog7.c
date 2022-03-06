//check whether a given alphabet is vowel or constant
#include<stdio.h>
int main(){
    char c;
    printf("Enter alphabet:\n");
    scanf("%c", &c);
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("It is a vowel");
    }
    else{
        printf("It is constant");
    }
    
    return 0;
}