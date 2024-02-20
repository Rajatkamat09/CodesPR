/* Q : - Write a application which accept file name from user
         and Create that file.


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#include<fcntl.h>      



int main()
{
    char fileName[30];
    int fd = 0;

    printf("Enter the name of file to create: \n");
    scanf("%s",fileName);

    fd = creat(fileName,0777);

    if (fd == -1)
    {
        printf("Unable to creat %s file \n",fileName);

    }
    else
    {
        printf("%s gets created successfully.. %d\n",fileName,fd);
        
    }
    
    
    return 0;
}