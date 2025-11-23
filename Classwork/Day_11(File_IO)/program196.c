// Creating a File

#include <stdio.h>                                  // Standard IO Header file
#include <fcntl.h>                                  // Header file for file Control

int main()                                          // Main method
{
    int fd = 0;                                     // Local Variable

    fd = creat("PPA.txt", 0777);                    // Create file [int creat(char * File_Name, int permission);]

    if(fd == -1)                                    // Check if the file is created
    {
        printf("Unable to create the file\n");
    }
    else
    {
        printf("File Successfully created!\n");
    }

    return 0;
}