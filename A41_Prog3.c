/* Q : - Write a application which accept file name from user
         and Read all data from that file and display content on screen.
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

    printf("Enter the name of file to read: \n");
    scanf("%s",fileName);

    fd = open(fileName,O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open %s file \n",fileName);

    }
    else
    {
        printf("%s gets opened successfully.. %d\n",fileName,fd);

        iRet = read(fd,Arr,10);

        printf("Data from file is : %s\n",Arr);

        close(fd);
    }
    
    
    return 0;
}