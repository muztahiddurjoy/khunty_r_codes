#include <stdio.h>

int main(){
    int numOne,numTwo;
    printf("Enter The First Number\n");
    scanf("%d",&numOne);
    printf("Enter The Second Number\n");
    scanf("%d",&numTwo);
    if(numOne>numTwo){
        printf("The Number %d is bigger than %d",numOne,numTwo);
    }
    else{
        printf("The Number %d is bigger than %d",numTwo,numOne);
    }
    return 0;
}
