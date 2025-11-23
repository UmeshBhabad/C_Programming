#include <stdio.h>
#include <fcntl.h>

int main()                                              // Main method
{
    int fd = 0, iRet = 0;                               // Local Variables
    char FileName[20];
    char Data[50];

    printf("Enter the Name of file : \n");              // Accept file path
    scanf("%s", &FileName);

    fd = open(FileName, O_RDWR);                        // opening the file

    if(fd == -1)                                        // Check if file is opened
    {
        printf("Unable to open File.");
        return -1;
    }

    iRet = read(fd, Data, 7);  // prints garbage        // reading data from file

    printf("%d bytes successfully Read!\n", iRet);      // printing message

    printf("Data from file : %s\n", Data);              // Displaying data

    close(fd);                                          // closing file

    return 0;
}