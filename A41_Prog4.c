/* Q : - Write a application which accept file name from user
        and display Size of the file.

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#include<fcntl.h>             // fcntl = file control.
#include<string.h>



int main()
{
    char fileName[30];
    char Arr [100] = {'\0'};

    int iSize = 0;

    int fd = 0, iRet = 0;

    printf("Enter the name of file to write: \n");
    scanf("%s",fileName);

    fd = open(fileName,O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open %s file \n",fileName);

    }
    else
    {
        printf("%s gets opened successfully...%d\n",fileName,fd);

        while ((iRet =  read(fd,Arr,sizeof(Arr))) != 0)
        {
            iSize = iSize + iRet;
        }
        printf("File contains %d bytes in it \n",iSize);
        
        close(fd);
    }
    
    return 0;
}