#include <stdio.h>




int main(){

    int iNum1,iNum2=0;

    printf("Enter First Number: ");
    scanf("%d",&iNum1);

    printf("Enter Second Number: ");
    scanf("%d",&iNum2);

    if(iNum1%iNum2==0){
        printf("Divisible");
    }else{
        printf("Not divisible");
    }
    return 0;
}