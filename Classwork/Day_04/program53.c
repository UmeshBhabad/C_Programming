// Program to count factors and non- factors(Count Number of White and Number of Black Shirts)

#include <stdio.h>

void CountFactorsNonFactors(int iNo)                                // Function defination
{
    
    int iCnt = 0;                                                   // Local Variable 
    int iFrequency1 =0;
    int iFrequency2 = 0;

    if(iNo < 0)                                                     // Input Updation
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)                               // Loop
    {
        if((iNo % iCnt) == 0)                                       // Business Logic
        {
            iFrequency1++;                                          //Factors
        }
        else
        {
            iFrequency2++;                                          //Non Factors
        }
    }
    
    printf("No of Factors are : %d\n",iFrequency1);                 // Display Output

    printf("No of Non-Factors are : %d\n",iFrequency2);             // Display Output
}


int main(){

    int iValue = 0;                                                 // Variable Declaration 

    printf("Enter the Number: \n");                                 // Input    
    scanf("%d",&iValue);

    CountFactorsNonFactors(iValue);                                 // Function Call

    return 0;
}