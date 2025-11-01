// Program

// Using Loop to display numbers from 1 to 5 with asterisk

#include <stdio.h>
void display()
{
    int iCount = 0;                                       // Loop Counter Variable
    
    for(iCount = 1; iCount <= 5; iCount++)
    {
        printf("%d\t*\t",iCount);
        
    }
}
int main(){

    display();                                            // Function Call
    
    return 0;
}