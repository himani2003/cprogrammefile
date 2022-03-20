//array elemnts calloc() function
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p, i, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    p = (int*)calloc(n, sizeof(int));
    if(p==NULL){
        printf("Memory allocation failed");
        exit(1);
    }
    for(i = 0; i < n; i++){
        printf("Enter %d element: ", i);
        scanf("%d", p+i);
    }
    printf("\nprinting array of %d integers\n\n", n);
    for(i = 0; i < n; i++){
        printf("%d ", *(p+i));
    }
    return 0;
}