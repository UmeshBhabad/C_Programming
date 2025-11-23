// Reading data from file

#include <stdio.h>
#include <fcntl.h>

int main()                                              // Main method
{
    int fd = 0, iRet = 0;                               // Local Variables
    char FileName[20];
    char Data[50];

    printf("Enter the Name of file : \n");              // Accept file path
    scanf("%s", &FileName);

    fd = open(FileName, O_RDWR);                        // opening a file

    if(fd == -1)                                        // Check if file is opened
    {
        printf("Unable to open File.");
        return -1;
    }

    iRet = read(fd, Data, 5);                           // Reading data from the file

    printf("%d bytes successfully Read!\n", iRet);      // print message

    printf("Data from file : %s\n", Data);              // Displaying data 

    close(fd);                                          // Closing file

    return 0;
}