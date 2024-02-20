///////////////////////////Accept filename from user and read whole file///////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#include<fcntl.h>             // fcntl = file control.
#include<string.h>


#define BUFFERSIZE 1024

int main()
{
    char fileName[30];
    char Arr [BUFFERSIZE] = {'\0'};

    int fd = 0, iRet = 0;
    int i = 0 , iCOunt = 0;

    printf("Enter the name of file that you want to write into from current directory : \n");
    scanf("%s",fileName);

    fd = open(fileName,O_RDWR);

    if (fd == -1)
    {
        printf("Unable to write %s file \n",fileName);

    }
    else
    {
        printf("%s gets opened successfully  with  file descriptor %d\n",fileName,fd);

        while ((iRet =  read(fd,Arr,sizeof(Arr))) != 0)
        {
           for (i = 0; i < iRet; i++)
           {
                if ((Arr[i]>='0' && (Arr[i]<='9')))
                {
                    iCOunt++;
                }
                
           }
           
        }
        
        close(fd);
    }
    printf("Number of digits  in the file are : %d\n",iCOunt);
    
    return 0;
}