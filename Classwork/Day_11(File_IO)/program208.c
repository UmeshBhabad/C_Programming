#include <stdio.h>
#include <fcntl.h>

int main()                                                      // Main method
{
    int fd = 0, iRet = 0;                                       // Local Variables
    char FileName[20];
    char Data[50] = {'\0'};

    printf("Enter the Name of file : \n");                      // accept file path
    scanf("%s", &FileName);

    fd = open(FileName, O_RDWR);                                // opening file

    if(fd == -1)                                                // Check if file
    {
        printf("Unable to open File.");
        return -1;
    }

    iRet = read(fd, Data, 7);                                   // Reading data from file

    printf("%d bytes successfully Read!\n", iRet);              // Displaying bytes read

    printf("Data from file\n");                                 // Display data
    write(1, Data, iRet);                                       // Dsiplaying data on console(STDIN)

    printf("\n");

    close(fd);                                                  // Closing file

    return 0;
}