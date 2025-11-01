// Program

// Factors of Number

#include <stdio.h>

// Wrong Approach
void  DisplayFactors(int iNo)                                   // Function Definition
{
    if(iNo % 1 == 0)                                            // Logic
    {
        printf("1\t");
    }
    if(iNo % 2 == 0)
    {
        printf("2\t");
    }
    if(iNo % 3 == 0)
    {
        printf("3\t");
    }
    if(iNo % 4 == 0)
    {
        printf("4\t");
    }
    if(iNo % 5 == 0)
    {
        printf("5\t");
    }
}

int main()
{

    int iValue = 0;                                             // Local Variable  
    
    printf("Enter the Number: ");                               // Input
    scanf("%d",&iValue);

    DisplayFactors(iValue);                                     // Function Call


    return 0;
}