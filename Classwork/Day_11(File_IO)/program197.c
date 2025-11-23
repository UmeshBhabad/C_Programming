// Creating File

#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd = 0;                                                     // Local Variable

    fd = creat("PPA.txt", 0777);                                    // Creating a file

    if(fd == -1)                                                    // Check if File is created
    {
        printf("Unable to create the file\n");
    }
    else
    {
        printf("File Successfully created with fd : %d\n", fd);     // Displays File Descriptor
    }

    return 0;
}