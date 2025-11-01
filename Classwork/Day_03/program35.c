// Program

// Program to demonstrate Function without Argument and without Return Value(using loop)

#include <stdio.h>

void display()                                                  // Function Definition
{
    int iCount = 0;
    for(iCount = 5; iCount >= 1; iCount--)
    {
        printf("%d\t",iCount);
    }
    printf("\n");
}

int main(){

    display();                                                 // Function Call  
    return 0;
}