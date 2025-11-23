// Close the opened file

#include <stdio.h>
#include <fcntl.h>

int main()                                                          // Main Method
{
    int fd = 0;                                                     // Local Variables
    char FileName[20];

    printf("Enter the Name of file that you want to Open :\n");     // Accept file path 
    scanf("%s", &FileName);

    fd = open(FileName, O_RDWR);                                    // open the existing file

    if(fd == -1)                                                    // Check if file is opened
    {
        printf("Unable to open File.");
    }
    else
    {
        printf("File Successfully opened with fd : %d\n", fd);
    }

    close(fd);                                                      // Close the file

    return 0;
}