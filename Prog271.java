import java.util.*;

class Prog271
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0X00000900;
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
            System.out.println("9th bit is ON");
        }
        else
        {
            System.out.println("9th bit is OFF");
        }
        
    }
}