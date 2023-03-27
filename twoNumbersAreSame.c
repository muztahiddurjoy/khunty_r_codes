#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the First number\n");
    scanf("%d",&a);
    printf("Enter the Second number\n");
    scanf("%d",&b);
    if(a==b){
        printf("The Numbers are same, please enter again\n");
        printf("Enter the First number\n");
        scanf("%d",&a);
        printf("Enter the Second number\n");
        scanf("%d",&b);
    }
    else{
        printf("not same");
    }
    return 0;
}