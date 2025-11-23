// Writing data into a file

#include <stdio.h>
#include <fcntl.h>

int main()                                              // Main Method
{
    int fd = 0, iRet = 0;                               // Local Variables
    char FileName[20];
    char Data[] = "India is my country";

    printf("Enter the Name of file : \n");              // Accept file path
    scanf("%s", &FileName);

    fd = open(FileName, O_RDWR);                        // Opening a file

    if(fd == -1)                                        // Check if file is not allocated
    {
        printf("Unable to open File.");
        return -1;
    }

    iRet = write(fd, Data, 11);                         // writing data in file[int write(int FD, char * Buffer, int size);]

    printf("%d bytes successfully written!\n", iRet);   // print message

    close(fd);                                          // Closing a file

    return 0;
}