/* Q : - Write a application which accept file name from user
         and open that file in Read mode.     
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#include<fcntl.h>



int main()
{
    int fd = 0;

    fd = open("Demo.txt",O_RDONLY);

    if (fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File Opened Successfully..: %d\n",fd);
    }
    

    return 0;
}