/* Write a program which displays ASCII table. Table contains symbol, 
Decimal, Hexadecimal and Octal representation of every member from 
0 to 255.
*/
#include <stdio.h>

void DisplayASCII()                   // Function defination
{
    int iCnt = 0;
    int iDec = 0;
    char ch = '\0';
    int iHex0 = 0;
    char cHex = '\0';
    int iOct0 = 0;
    int iOct1 = 0;
    int iOct2 = 0;
    int i = 0;


    // printf("Decimal\tOctal\tHex\tChar\n");
    printf("Decimal\tOctal\tChar\n");
    for(iCnt = 0, ch = 0; iCnt <= 255; iCnt++, ch++)
    {
        iDec = iCnt;
        printf("%d\t", iDec);   // Decimal
        
            
        // Octal

        if(iOct2 >= 0 && iOct2 <= 7)
        {
            if(iOct1 >= 0 && iOct1 <= 7)
            {
                if(iOct0 >= 0 && iOct0 <= 7)
                {
                    printf("%d%d%d\t", iOct2, iOct1, iOct0);
                    iOct0++;
                }
                else
                {
                    iOct1++;
                    iOct0 = 0;
                    
                    if(iOct1 >= 0 && iOct1 <= 7)
                    {
                        printf("%d%d%d\t", iOct2, iOct1, iOct0);
                        iOct0++;
                    }
                    else
                    {
                        iOct2++;
                        iOct1 = 0;
                        iOct0 = 0;
                        printf("%d%d%d\t", iOct2, iOct1, iOct0);
                        iOct0++;
                    }                    
                }
            }
            // else
            // {
            //     iOct2++;
            //     iOct1 = 0;
            //     iOct0 = 0;
            //     printf("%d\t%d%d%d\t%c\n", iCnt,iOct2, iOct1, iOct0, ch);
            //     iOct0++;
            // }
        }

        // Hexadecimal
        // for(int j = 0; j <= 9; j++)
        // {
        //     printf("%d\t", iHex0);
        //     iHex0++;
        // }

        // for(cHex = 'A'; cHex <= 'F'; cHex++)
        // {
        //     printf("%d%c\t", i, cHex);
        // }
        
        printf("%c \n", ch);     // char

    }
}

int main()                                      // Main method              
{
    DisplayASCII();                    // Function call

    return 0;
}



/*
for(int i = 0; i <= 15; i++)
    {
        for(int j = 0; j <= 9; j++)
        {
            printf("%d\n", iHex0);
            iHex0++;
        }

        for(char cHex = 'A'; cHex <= 'F'; cHex++)
        {
            printf("%d%c\n", i, cHex);
        }
    }
*/