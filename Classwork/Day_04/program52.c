// Count Non-Factors
#include <stdio.h>

int CountNonFactors(int iNo){
    int iCnt, iFrequency=0;

    if(iNo<0){
        iNo = -iNo;
    }

    for(iCnt=1; iCnt < iNo; iCnt++){

        if((iNo % iCnt) != 0)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}


int main(){

    int iValue, iRet =0;

    printf("Enter the Number: ");
    scanf("%d\n",&iValue);

    iRet=CountNonFactors(iValue);
    
    printf("Number of Non-factors are : ",iRet);

    return 0;
}