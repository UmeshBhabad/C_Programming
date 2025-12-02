/* Accept devision of students from user and depends on the division 
display exam timing. There are 4 division in school as A,B,C,D. Exam 
of division A at 7AM, B at 8.30AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
*/
#include <stdio.h>

void DisplaySchedule(char ch)                   // Function defination
{
    if((ch == 'A') || (ch == 'a'))              // Business Logic
    {
        printf("Your exam at 7 AM");
    }
    else if((ch == 'B') || (ch == 'b'))
    {
        printf("Your exam at 8.30 AM");
    }
    else if((ch == 'C') || (ch == 'c'))
    {
        printf("Your exam at 9.20 AM");
    }
    else if((ch == 'D') || (ch == 'd'))
    {
        printf("Your exam at 10.30 AM");
    }
    else
    {
        printf("Invalid Input");
    }
}

int main()                                      // Main method              
{
    char cValue = '\0';                         // Local Variable

    printf("Enter the Character : \n");         // Accept Character
    scanf("%c", &cValue);

    DisplaySchedule(cValue);                    // Function call

    return 0;
}