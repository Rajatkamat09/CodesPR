
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <fcntl.h> // fcntl = file control.
#include <string.h>

int CountSmall(char FName[])
{
    int iCnt = 0;
    int iFreq = 0;

    while (FName[iCnt] != '\0')
    {
        if ((FName[iCnt] >= 'a') && (FName[iCnt] <= 'z'))
        {
            iFreq++;
        }
        iCnt++;
    }
    return iCnt;
}

int main()
{

    char fileName[30];
    char Arr[100] = {'\0'};
    int iRet = 0, iCount = 0;
    int fd = 0;

    printf("Enter the name of file: \n");
    scanf("%s", fileName);

    fd = open(fileName, O_RDWR | O_APPEND);

    if (fd == -1)
    {
        printf("Unable to open %s file \n", fileName);
    }
    else
    {
        printf("%s gets opened successfully.. %d\n", fileName, fd);

        iRet = read(fd, Arr, 10);

        printf("Data from file is : %s\n", Arr);

        close(fd);
    }
    iCount = CountSmall(fileName);
    printf("Small Characters are : %d", iCount);

    return 0;
}
