// Creating a file(Accepting filename from user)

#include <stdio.h>
#include <fcntl.h>

int main()                                                              // Main method
{
    int fd = 0;                                                         // Local Variables
    char FileName[20];

    printf("Enter the Name of file that uou want to create :\n");       // Accept filename from user(also file type)
    scanf("%s", &FileName);

    fd = creat(FileName, 0777);                                         // Creating a file

    if(fd == -1)                                                        // Check if file is created
    {
        printf("Unable to create the file\n");
    }
    else
    {
        printf("File Successfully created with fd : %d\n", fd);
    }

    return 0;
}