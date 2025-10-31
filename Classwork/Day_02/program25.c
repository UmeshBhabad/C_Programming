// better approach

// Using function to display "Jay Ganesh" four times

#include <stdio.h>

void Display()                   
{
    // static function
    int iCnt = 0;
    
    //    1           2         3
    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("Jay Ganesh...\n"); //4
    }
        
}

int main()                        
{
    Display();                              // function call
    
    return 0;    
}