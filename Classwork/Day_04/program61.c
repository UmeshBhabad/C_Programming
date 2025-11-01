// Program

// Program to extract digits from a number and display remaining number

#include <stdio.h>

int main()
{
    int iNo = 7236;                                                    // Variable Declaration  
    int iDigit = 0;

    iDigit = iNo % 10;                                                 // Extract last digit
    printf("iDigit is : %d\n",iDigit);                                 // Display digit
    iNo = iNo / 10;                                                    // Remove last digit
    printf("iNo is : %d\n",iNo);                                       // Display remaining number

    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n",iNo);

    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n",iNo);

    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n",iNo);


    return 0;
}