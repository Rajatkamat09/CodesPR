import java.util.*;

class Prog262
{
    public static void main (String a[])
    {
        Scanner sobj = new Scanner (System.in);
        int iNo= 0;
        int iDigit = 0;
        int iCnt = 0;

        System.out.println("Enter the Number: ");;
        iNo = sobj.nextInt();
        
        while(iNo != 0)
        {
            iDigit = iNo % 2;
            iNo= iNo/2;
            
            if(iDigit == 1)
            {
                iCnt++;
            }
        }
        System.out.println("NUmber of 1 bit are : "+iCnt);
    }
}