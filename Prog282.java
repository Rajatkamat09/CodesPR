//////////////////////////////////   position  Check bit///////////////////////////////////////////////////////
import java.util.*;

class Prog282
{
    public static boolean CheckBit(int iNo, int iPos)
    {
        int iMask = 0X00000001;
        int iResult = 0;
        iMask = iMask <<(iPos-1);

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main (String a[])
    {
        Scanner sobj = new Scanner (System.in);
        int iNo = 0 ,iPos = 0;
        boolean bRet = false;
        
        System.out.println("Enter the number");
        iNo = sobj.nextInt();

        System.out.println("Enter the Position number");
        iPos = sobj.nextInt();

        bRet = CheckBit(iNo, iPos);

        if(bRet == true)
        {
            System.out.println("Bit is ON at givn position");
        }
        else
        {
            System.out.println("Bit is OFF at givn position");
        }
    }
}