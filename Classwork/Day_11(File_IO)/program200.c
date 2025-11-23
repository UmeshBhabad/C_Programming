// Opening an existing File

#include <stdio.h>
#include <fcntl.h>

int main()                                                          // Main Method 
{
    int fd = 0;                                                     // Local Variables
    char FileName[20];

    printf("Enter the Name of file that uou want to Open :\n");     // Accept File Path from user
    scanf("%s", &FileName);

    fd = open(FileName, O_RDWR);                                    // Open a file[int open(File_Name, int permission)]

    if(fd == -1)                                                    // Check if file is opened
    {
        printf("Unable to open File.");
    }
    else
    {
        printf("File Successfully opened with fd : %d\n", fd);
    }

    return 0;
}