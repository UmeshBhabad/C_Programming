// Program

// Program to extract digits from a number(723614) and display remaining number with separators

#include <stdio.h>

int main()
{
    int iNo = 723614;                                                       // Variable Declaration    
    int iDigit = 0;

    printf("-------------------------------------------------------\n");     // Separator
    printf("Original value of iNo is : %d\n",iNo);

    printf("-------------------------------------------------------\n");
    iDigit = iNo % 10;                                                       // Extract last digit  
    printf("iDigit is : %d\n",iDigit);                                       // Display digit
    iNo = iNo / 10;                                                          // Remove last digit   
    printf("iNo is : %d\n",iNo);                                             // Display remaining number

    printf("-------------------------------------------------------\n");
    iDigit=iNo%10;
    printf("iDigit is : %d\n",iDigit);
    iNo=iNo/10;
    printf("iNo is : %d\n",iNo);

    printf("-------------------------------------------------------\n");
    iDigit=iNo%10;
    printf("iDigit is : %d\n",iDigit);
    iNo=iNo/10;
    printf("iNo is : %d\n",iNo);

    printf("-------------------------------------------------------\n");
    iDigit=iNo%10;
    printf("iDigit is : %d\n",iDigit);
    iNo=iNo/10;
    printf("iNo is : %d\n",iNo);
    printf("-------------------------------------------------------\n");

    return 0;
}