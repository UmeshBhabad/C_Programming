// string.h header file

#include <stdio.h>
#include <string.h>                                     // Header file for string operations

int main()
{
    char Arr[] = {'H', 'e', 'l', 'l', 'o', '\0'};       // character array declaration, Initialization

    printf("%s\n", Arr);            // Hello
    printf("%ld\n", sizeof(Arr));   // 6
    printf("%d\n", strlen(Arr));    // 5

    return 0;
}
