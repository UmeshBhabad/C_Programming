// Factors of 6
#include <stdio.h>

// Wrong Approach
void  DisplayFactors(int iNo){
    
    
    if(iNo%1==0){
        printf("1\t");
    }
    if(iNo%2==0){
        printf("2\t");
    }
    if(iNo%3==0){
        printf("3\t");
    }
    if(iNo%4==0){
        printf("4\t");
    }
    if(iNo%5==0){
        printf("5\t");
    }
}

int main(){

    int iValue=0;
    
    printf("Enter the Number: ");
    scanf("%d",&iValue);

    DisplayFactors(iValue);


    return 0;
}