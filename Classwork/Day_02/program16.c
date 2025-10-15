//////////////////////////////////////////////////////////////////////
//
//  Required Header File
//
//////////////////////////////////////////////////////////////////////

#include <stdio.h>                              // For Input Output
#include <stdbool.h>                            // For bool datatype

//////////////////////////////////////////////////////////////////////
//
//  Function name :                 CheckEvenOdd
//  Description :                   It is used to check even or odd
//  Input :                         Integer
//  Output :                        Umesh shivaji Bhabad
//  Auther :                        10/10/2025
//
//////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo){
    int iRem=0;

    iRem=iNo % 2;
    
    if (iRem==0)
    {  return true; }
    else
    {   return false; }
}

//////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the application
//
//////////////////////////////////////////////////////////////////////

int main() {
    
    int iValue=0;
    bool bRet=false;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);
    printf("Result is : %d\n",bRet);

    if(bRet==true){
        printf("%d is Even number\n",iValue);
    }else{
        printf("%d is Odd number\n",iValue);

    }



    return 0;
}

//////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////
