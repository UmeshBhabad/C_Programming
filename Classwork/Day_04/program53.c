// Count Number of White and Number of Black Shirts
#include <stdio.h>

void CountFactorsNonFactors(int iNo){
    
    int iCnt=0; 
    int iFrequency1, iFrequency2=0;

    if(iNo < 0){
        iNo = -iNo;
    }

    for(iCnt=1; iCnt < iNo; iCnt++){

        if((iNo % iCnt) == 0)
        {
            iFrequency1++;                  //Factors
        }else
        {
            iFrequency2++;                  //Non Factors
        }
    }
    printf("No of Factors are : \n",iFrequency1);
    printf("No of Non-Factors are : \n",iFrequency2);
}


int main(){

    int iValue;

    printf("Enter the Number: \n");
    scanf("%d\n",&iValue);

    CountFactorsNonFactors(iValue);

    return 0;
}