// Accept character from user and display its ASCII value in decimal, Ocatal and hexadecimal format.

#include <stdio.h>

void Display(char ch)                   // Function defination
{
    int iCnt = 0;
    int iDec = 0, iRem = 0;
    char cRem = '\0';
    char Arr[50] = {'\0'};
    int *Brr = &Arr;
    int Temp = Brr;

    iDec = ch;

    printf("%d\n", iDec);

    while(iDec != 0)
    {
        iRem = iDec % 16;
        iDec /= 16;

        if(iRem >= 0 && iRem <= 9)
        {
            Arr[iCnt] = iRem;
        }
        if(iRem >= 10 && iRem <= 15)
        {
            switch(iRem)
            {
                case 10:
                    cRem = 'A';
                    break;
                case 11:
                    cRem = 'B';
                    break;
                case 12:
                    cRem = 'C';
                case 13:
                    cRem = 'D';
                case 14:
                    cRem = 'E';
                case 15:
                    cRem = 'F';
            }
            Arr[iCnt] = cRem;
        }
        iCnt++;

    }

    while(*Brr != '\0');
    {
        Brr++;
    }
    Brr--;

    while(Brr >= Temp)
    {
        printf("%c", *Brr);
    }


    // for(iCnt = 0; iCnt <= 255; iCnt++)
    // {

    // }
}

int main()                                      // Main method              
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c", &cValue);
    
    Display(cValue);                            // Function call

    return 0;
}