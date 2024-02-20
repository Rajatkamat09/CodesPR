import java.util.*;

class Prog265
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 4;
        int iResult = 0;

        iResult = iNo & iMask ;

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
        int iNo = 0;
        boolean bRet = false;

        System.out.println("Enter the number");
        iNo = sobj.nextInt();

       bRet = CheckBit(iNo);
        if(bRet ==  true)
        {
            System.out.println("bit is ON");
        }
        else
        {
            System.out.println("bit is OFF");
        }

    }
}