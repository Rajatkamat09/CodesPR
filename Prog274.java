import java.util.*;

class Prog274
{
    public static int OFFBit(int iNo)
    {
        int iMask = 0X00000008;
        int iResult = 0;

        iResult = iNo & iMask ;

        if(iResult == iMask)      // 4th bit is ON
        {
            return (iNo ^ iMask);
        }
        else                        // 4th bit is OFF
        {
            return iNo;
        }
    }
    public static void main (String a[])
    {
        Scanner sobj = new Scanner (System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the number");
        iNo = sobj.nextInt();

        iRet = OFFBit(iNo);
        
            System.out.println("Updated number is"+iRet);
        
    }
}