//////////////////////////////////   position  ///////////////////////////////////////////////////////
import java.util.*;

class Prog280
{
    public static int PositionBit(int iNo, int iPos)
    {
        int iMask = 0X00000001;
        int iResult = 0;

        iMask = iMask <<((iPos-1))

        iResult = iNo ^ iMask ;

       return iResult;
    }

    public static void main (String a[])
    {
        Scanner sobj = new Scanner (System.in);
        int iNo = 0 ,iPos = 0;
        int iRet = 0;
        
        System.out.println("Enter the number");
        iNo = sobj.nextInt();

        System.out.println("Enter the Position number");
        iPos = sobj.nextInt();

        iRet = PositionBit(iNo, iPos);
        
        System.out.println("Updated number is"+iRet);
        
    }
}