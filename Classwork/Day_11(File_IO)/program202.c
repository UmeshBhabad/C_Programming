// Displaying file descriptor of various file opened at same time

#include <stdio.h>
#include <fcntl.h>

int main()                                      // Main Method
{
    int fd1 = 0, fd2 = 0, fd3 = 0;              // Local variables

    fd1 = open("PPA.txt", O_RDONLY);            // Opening files
    printf("fd1 : %d\n", fd1);      // 3        // Displaying file descriptor

    fd2 = open("LB.txt", O_RDONLY);
    printf("fd2 : %d\n", fd2);      // 4

    fd3 = open("Demo.txt", O_RDONLY);
    printf("fd3 : %d\n", fd3);      // 5

    return 0;
}