// Deleting the Existing file

#include <stdio.h>
#include <fcntl.h>

int main()                  // Main Method
{
    unlink("PPA.txt");      // Deletes existing file PPA.txt[unlink(File_Name)]

    return 0;
}