/* 
Step1: Understand the problem statement
Step2: Write the algorithm
Step3: Decide the programming Language
Step4: Write a program
Step5: Test the program
*/

/*
Algorithm:
START
    Accept first number as No1.
    Accept second number as No2.
    If the input is negative then convert it into positive.
    Perform addition of No1 and No2.
    Display the addition on screen.
STOP
*/

//Program
#include <stdio.h>

float AdditionTwoNumbers(float fNo1,float fNo2){
    
    float fSum=0.0f;

    //Updater
    if(fNo1<0.0f){
        fNo1= -fNo1;
    }
    
    if(fNo2<0.0f){
        fNo2= -fNo2;
    }

    fSum=fNo1+fNo2;// Business Logic
    return fSum;
}

float main(){
    
    float fValue1=0.0f, fValue2=0.0f, fRet=0.0f;
    
    printf("Enter First Number: \n");
    scanf("%f",&fValue1);
    
    printf("Enter Second Number: \n");
    scanf("%f",&fValue2);
    
    fRet=AdditionTwoNumbers(fValue1,fValue2);//Function Call

    printf("Addition is: %f\n",fRet);
    
    return 0;
}