/* Q : - Write a application which accept file name from user and 
         One string from user .Write that string at the end of the file.

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#include<fcntl.h>            
#include<string.h>



int main()
{
    char fileName[30];
    char Arr [100] = {'\0'};
    int fd = 0, iRet = 0;

    printf("Enter the name of file to write: \n");
    scanf("%s",fileName);

    fd = open(fileName,O_RDWR | O_APPEND);

    if (fd == -1)
    {
        printf("Unable to write %s file \n",fileName);

    }
    else
    {
        printf("%s gets opened successfully..%d\n",fileName,fd);

        printf("Enter the data into the file: \n");
        scanf(" %[^\n]s",Arr);

        iRet = write(fd,Arr,strlen(Arr));

        printf("%d bytes gets Written successfully : \n ",iRet);
        close(fd);
    }
    
    
    return 0;
}