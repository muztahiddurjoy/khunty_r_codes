#include <stdio.h>

int main(){
    int n;
    printf("Enter The Number\n");
    scanf("%d",&n);
    
    if(n%3==0 && n%5==0){
        printf("Fizz Buzz");
    }
    else if(n%3==0){
        printf("Sizz");
    }
    else if(n%5==0){
        printf("Fizz");
    }
    return 0;
}