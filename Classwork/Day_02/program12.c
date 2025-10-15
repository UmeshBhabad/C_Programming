/*
START
    Accept number and store as no.
    Divide no by two.
    if th eremainder is zero 
        then display even 
    otherwise
        display odd.

STOP
*/
#include <stdio.h>


void CheckEvenOdd(int iNo){
    int iRem=0;

    iRem=iNo%2;
    
    if (iRem==0)
    {
        printf("The number is Even");
    }else{
        printf("Odd Number");
    }
}

int main() {
    
    int iValue=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);



    return 0;
}