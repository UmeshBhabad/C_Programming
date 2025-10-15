// Factors of 6
#include <stdio.h>

void  DisplayFactors(){
    if(6%1==0){
        printf("1\t");
    }
    if(6%2==0){
        printf("2\t");
    }
    if(6%3==0){
        printf("3\t");
    }
    if(6%4==0){
        printf("4\t");
    }
    if(6%5==0){
        printf("5\t");
    }
}

int main(){

    int iValue=0;
    
    // printf("Enter the Number: ");
    // scanf("%d",&iValue);

    DisplayFactors();


    return 0;
}