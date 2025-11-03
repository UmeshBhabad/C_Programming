// Write a program which accept name from user and print that name.

#include <stdio.h>

int main()
{
    char Name[30];                              // Local Variable

    printf("Enter your full name\n");           // User Input
    // gets(Name);
    scanf("%s", &Name);

    printf("Your Name is %s", Name);            // Display Output

    return 0;
}