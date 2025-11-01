// Program

// Write a program to display 1 to 5 using function.

#include <stdio.h>

void display(int iNum)                              // Dunction Definition
{
    printf("1\t");                                  //  \t is used to give space between two numbers
    printf("2\t");
    printf("3\t");
    printf("4\t");
    printf("5\t");
}

int main()
{
    display(5);                                     // Function Call    

    return 0;
}