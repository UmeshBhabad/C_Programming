// 

#include <stdio.h>

int main()
{
    char Name[50] = {'\0'};                             // Initiallize with /0

    printf("Enter your Name : \n");                     // Accept Name
    scanf("%[^'\n']s", Name);  // take input till \n

    printf("Hello : %s", Name);                         // Display String

    return 0;
}

/*
    Input : Umesh Shivaji Bhabad

    Output : 
                Hello : Umesh Shivaji Bhabad
*/
