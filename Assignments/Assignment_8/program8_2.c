// Accept single digit number from user and print it into word.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description:   Used to print Numbers in word.
// Input:         Integer
// Output:        String
// Author:        Umesh Shivaji Bhabad
// Date:          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    /*if(iNo == 0)
    {
        printf("Zero");
    }

    if(iNo == 1)
    {
        printf("One");
    }

    if(iNo == 2)
    {
        printf("Two");
    }

    if(iNo == 3)
    {
        printf("Three");
    }

    if(iNo == 4)
    {
        printf("Four");
    }

    if(iNo == 5)
    {
        printf("Five");
    }

    if(iNo == 6)
    {
        printf("Six");
    }

    if(iNo == 7)
    {
        printf("Seven");
    }

    if(iNo == 8)
    {
        printf("Eight");
    }

    if(iNo == 9)
    {
        printf("Nine");
    }

    if(iNo > 9)
    {
        printf("Invalid Number");
    }
        */

    
    
    switch (iNo)
    {
        case 0:
            printf("Zero");
            break;

        case 1:
            printf("One");
            break;

        case 2:
            printf("Two");
            break;

        case 3:
            printf("Three");
            break;

        case 4:
            printf("Four");
            break;

        case 5:
            printf("Five");
            break;

        case 6:
            printf("Six");
            break;

        case 7:
            printf("Seven");
            break;

        case 8:
            printf("Eight");
            break;

        case 9:
            printf("Nine");
            break;
        
        default:
            printf("Invalid Number");
    }   


}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 9                   
// Output: Nine
//
// Input: -3                   
// Output: Three
//
// Input: 12                   
// Output: Invalid
//
///////////////////////////////////////////////////////////////////////////////////