// Removing garbage printed after reading

#include <stdio.h>
#include <fcntl.h>

int main()                                              // Main method
{
    int fd = 0, iRet = 0;                               // Local Variables
    char FileName[20];
    char Data[50] = {'\0'};                             // Initialize array with null character

    printf("Enter the Name of file : \n");              // accept file path
    scanf("%s", &FileName);

    fd = open(FileName, O_RDWR);                        // Opening file 

    if(fd == -1)                                        // Check if file is opened
    {
        printf("Unable to open File.");
        return -1;
    }

    iRet = read(fd, Data, 7);                           // reading data from file

    printf("%d bytes successfully Read!\n", iRet);      // Displaying bytes read

    printf("Data from file : %s\n", Data);              // Displaing data

    close(fd);                                          // Closing file

    return 0;
}