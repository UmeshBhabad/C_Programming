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

// Program

// Cherry on the top: Added comments for better understanding

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//
////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  AdditionTwoNumbers
//  Description:    It is used to perform addition
//  Input:          Float,  Float
//  Output:         Float
//  Author:         Umesh Shivaji Bhabad
//  Date:           09/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////
float AdditionTwoNumbers(float fNo1,float fNo2)
{    
    float fSum=0.0f;

    //Updater

    if(fNo1<0.0f){
        fNo1= -fNo1;
    }
    
    if(fNo2<0.0f){
        fNo2= -fNo2;
    }

    fSum=fNo1+fNo2;                                     // Business Logic
    
    return fSum;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////////////
float main()
{    
    float fValue1=0.0f, fValue2=0.0f, fRet=0.0f;        // Local Variables
    
    printf("Enter First Number: \n");                   // Input
    scanf("%f",&fValue1);
    
    printf("Enter Second Number: \n");                  // Input
    scanf("%f",&fValue2);
    
    fRet=AdditionTwoNumbers(fValue1,fValue2);           //Function Call

    printf("Addition is: %f\n",fRet);                   // Output
    
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test cases sucessfully handled by the application
//
//  Input1: 10.5        Input2: 3.2         Output: 13.7
//  Input1: -10.5       Input2: 3.2         Output: 13.7
//  Input1: 10.5        Input2: -3.2        Output: 13.7
//  Input1: -10.5       Input2: -3.2        Output: 13.7
//  Input1: 10.5        Input2: 0.0         Output: 10.5
//
////////////////////////////////////////////////////////////////////////////////////////////////